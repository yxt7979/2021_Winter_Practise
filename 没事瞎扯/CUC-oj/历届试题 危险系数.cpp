#include <bits/stdc++.h>
using namespace std;
const int MaxSize = 2010;

int n,m;
vector<vector<int>> V;
bool visited[MaxSize];

bool bfs(int st,int en){
	queue<int> Que;
	Que.push(st);
	visited[st] = true;
	while(Que.size()){
		int t = Que.front();
		if(t == en) return true;
		Que.pop();
		for(int i = 0;i < V[t].size();i++){
			if(!visited[V[t][i]]){
				visited[V[t][i]] = true;
				Que.push(V[t][i]);
			}
		}
	}
	return false;
}

int main()
{
	scanf("%d%d",&n,&m);
	V.resize(n+1);
	for(int i = 0;i < m;i++){
		int a,b;
		scanf("%d%d",&a,&b);
		V[a].push_back(b);
		V[b].push_back(a);
	}
	int st,en;
	scanf("%d%d",&st,&en);
	memset(visited,false,sizeof(visited));
	if(bfs(st,en) == false) {
		printf("-1\n");
		return 0;
	}
	else{
		int ans = 0;
		for(int i = 1;i <= n;i++){
			if(i != st && i != en){
				memset(visited,false,sizeof(visited));
				visited[i] = true;
				if(bfs(st,en) == false) ans ++ ;
			}
		}
		printf("%d",ans);
	}
	return 0;
}
