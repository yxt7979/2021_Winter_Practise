#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

vector<int> sleep,parent,set_rank;  //���鼯��parent[]��set_rank[]�ǰ��Ⱥϲ�
set<pair<int,pair<int,int> > > adj; // (weight,(src,dest))��(Ȩֵ��(Դ�ڵ㣬β�ڵ�))
								    // ��set����ΪĬ����С���ѣ������weight��С��������

void init(int V)
{
	set_rank=vector<int>(V,0);
	parent=vector<int>(V,-1);
}
int find(int x)
{
	return parent[x]==-1?x:parent[x]=find(parent[x]);  //·��ѹ��
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
		if(x==y)  //�л�
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
		int new_weight=2*w+sleep[src-1]+sleep[dest-1];  //�޸�Ȩֵ
		adj.insert(make_pair(new_weight,make_pair(src,dest)));
	}

	long long sum=0;

	sum+=mst(V,E)+*min_element(sleep.begin(),sleep.end());
	cout<<sum<<endl;
	
	//getchar();
	//getchar();
	return 0;
}

