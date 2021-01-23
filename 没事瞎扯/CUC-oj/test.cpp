#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

vector<int> sleep,parent,set_rank;  //并查集的parent[]，set_rank[]是按秩合并
set<pair<int,pair<int,int> > > adj; // (weight,(src,dest))：(权值，(源节点，尾节点))
								    // 用set是因为默认是小根堆，会根据weight从小到大排序

void init(int V)
{
	set_rank=vector<int>(V,0);
	parent=vector<int>(V,-1);
}
int find(int x)
{
	return parent[x]==-1?x:parent[x]=find(parent[x]);  //路径压缩
}
void Union(int x,int y)
{
	int xSet=find(x);
	int ySet=find(y);

	if(set_rank[xSet]<set_rank[ySet])
		parent[xSet]=ySet;
	else if(set_rank[xSet]>set_rank[ySet])
		parent[ySet]=xSet;
	else{
		parent[xSet]=ySet;
		set_rank[ySet]++;
	}
}
long long mst(int V,int E)
{
	init(V);
	long long total=0;
	int e=0;
	while(e<E-1 && !adj.empty()){
		pair<int,pair<int,int> > tmp=*(adj.begin());
		adj.erase(adj.begin());

		int weight=tmp.first;
		int src=tmp.second.first-1;
		int dest=tmp.second.second-1;

		int x=find(src);
		int y=find(dest);
		if(x==y)  //有环
			continue;
		Union(src,dest);
		e++;
		total+=weight;
	}
	return total;
}
int main()
{
	int V,E;
	cin>>V>>E;

	sleep.resize(V);
	for(int i=0;i<V;i++)
		cin>>sleep[i];

	int w,src,dest;
	for(int i=0;i<E;i++){
		
		cin>>src>>dest>>w;
		int new_weight=2*w+sleep[src-1]+sleep[dest-1];  //修改权值
		adj.insert(make_pair(new_weight,make_pair(src,dest)));
	}

	long long sum=0;

	sum+=mst(V,E)+*min_element(sleep.begin(),sleep.end());
	cout<<sum<<endl;
	
	//getchar();
	//getchar();
	return 0;
}

