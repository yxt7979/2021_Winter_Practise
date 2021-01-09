#include <bits/stdc++.h>
using namespace std;
const int MaxSize = 1010;
bool M1[MaxSize][MaxSize];
bool M2[MaxSize][MaxSize];

int n;
bool solve(int x,int y,bool M[MaxSize][MaxSize]){
	if(x == y){
		printf("Yes");
		return true;
	}
	bool visited[n+1][n+1];
	memset(visited,false,sizeof(visited));
	queue<int> Que;
	for(int i = 1;i <= n;i++){
		if(M[x][i] == true){
			Que.push(i);
			visited[x][i] = true;
		}
	} 
	while(Que.size()){
		int t = Que.front();
		if(t == y){
			printf("Yes");
			return true;
		}
		for(int i = 1;i <= n;i++){
			if(M[t][i] == true && !visited[t][i]){
				Que.push(i);
			}
		}
		Que.pop();
	}
	printf("No");
	return false;
}

int main()
{
	int m1,m2,q;
	scanf("%d%d%d%d",&n,&m1,&m2,&q);
	memset(M1,false,sizeof(M1));
	memset(M2,true,sizeof(M2));
	for(int i = 0;i < m1;i++){
		int x,y;
		scanf("%d%d",&x,&y);
		M1[x][y] = true;
	}
	for(int i = 0;i < m2;i++){
		int x,y;
		scanf("%d%d",&x,&y);
		M2[x][y] = false;
	}
	for(int i = 0;i < q;i++){
		int x,y;
		scanf("%d%d",&x,&y);
		bool ce = solve(x,y,M1);
		printf(" ");
		if(ce) printf("Yes");
		else ce = solve(x,y,M2);
		printf("\n");
	}
	return 0;
}
