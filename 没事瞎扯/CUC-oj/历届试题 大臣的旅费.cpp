#include <bits/stdc++.h>
using namespace std;
struct Node{
	int to;
	int val;
};
struct N{
	int no;
	int w;
};
vector<vector<Node>> V;
int n;
int lennode;

int bfs(int s){
	bool visited[n+1];
	memset(visited,false,sizeof(visited));
	queue<N> Que;
	N S;
	S.no = s;
	S.w = 0;
	Que.push(S);
	visited[s] = true;
	int ans = 0;
	while(Que.size()){
		N tmp = Que.front();
		Que.pop();
		if(tmp.w > ans){
			lennode = tmp.no;
			ans = max(ans,tmp.w);
		}
		for(int i = 0;i < V[tmp.no].size();i++){
			if(!visited[V[tmp.no][i].to]){
				visited[V[tmp.no][i].to] = true;
				N T;
				T.no = V[tmp.no][i].to;
				T.w = tmp.w + V[tmp.no][i].val;
				Que.push(T);
			}
		}
	}
	return ans;
}

int main()
{
	scanf("%d",&n);
	V.resize(n+1);
	for(int i = 0;i < n-1;i++){
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		Node A;
		A.to = b;A.val = c;
		V[a].push_back(A);
		Node B;
		B.to = a;B.val = c;
		V[b].push_back(B);
	}
	int len1 = bfs(1);
	int ans = bfs(lennode);
	printf("%d",(11 + 10 + ans) * ans / 2);
}
