#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MaxSize = 105;
struct P{
	int x,y,last;
	char val;
};
int n,m;
P M[MaxSize][MaxSize];
int sx,sy,ex,ey;
bool visited[MaxSize][MaxSize];
int N[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};
bool is_ok(int x,int y){
	return x >= 1 && x <= n && y >= 1 && y <= m && M[x][y].val != '#' && !visited[x][y]	;
}

void bfs(){
	queue<P> Que;
	Que.push(M[sx][sy]);
	visited[sx][sy] = true;
	while(Que.size()){
		P now = Que.front();
		if(now.x == ex && now.y == ey){
			printf("%d",now.last * 100);
			return;
		}
		Que.pop();
		for(int i = 0;i < 4;i++){
			int tmpx = now.x + N[i][0];
			int tmpy = now.y + N[i][1];
			if(is_ok(tmpx,tmpy)){
				M[tmpx][tmpy].last = now.last + 1;
				visited[tmpx][tmpy] = true;
				Que.push(M[tmpx][tmpy]);
			}
		}
	}
	printf("-1");
	return;
}

int main()
{
	scanf("%d%d",&n,&m);
	scanf("%d%d%d%d",&sx,&sy,&ex,&ey);
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= m;j++){
			cin>>M[i][j].val;
			M[i][j].x = i;
			M[i][j].y = j;
			M[i][j].last = 0;
		}
	}
	bfs();
	return 0;	
} 
