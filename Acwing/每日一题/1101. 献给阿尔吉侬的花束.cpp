#include <bits/stdc++.h>
using namespace std;
const int MaxSize = 205;
char M[MaxSize][MaxSize];
int sx,sy,ex,ey;
struct P{
	int x,y,num;
};

bool visited[MaxSize][MaxSize];
int a,b;
int N[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};

bool is_ok(int x,int y){
	return x >= 0 && x < a && y >= 0 && y < b && !visited[x][y] && M[x][y] != '#';
}
void bfs(){
	memset(visited,false,sizeof(visited));
	queue<P> Que;
	P k;
	k.num = 0;k.x = sx;k.y = sy;
	Que.push(k);
	visited[sx][sy] = true;
	while(Que.size()){
		P tmp = Que.front();
		if(M[tmp.x][tmp.y] == 'E'){
			cout<<tmp.num<<endl;
			return;
		}
		Que.pop();
		for(int i = 0;i < 4;i++){
			int tmpx = tmp.x + N[i][0];
			int tmpy = tmp.y + N[i][1];
			if(is_ok(tmpx,tmpy)){
				P t;
				t.num = tmp.num + 1;
				t.x = tmpx;t.y = tmpy;
				Que.push(t);
				visited[tmpx][tmpy] = true;
			}
		}
	}
	cout<<"oop!"<<endl;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&a,&b);
		for(int i = 0;i < a;i++){
			for(int j = 0;j < b;j++){
				cin>>M[i][j];
				if(M[i][j] == 'S'){
					sx = i;sy = j;
				}
				if(M[i][j] == 'E'){
					ex = i;ey = j;
				}
			}
		}
		bfs();
	}
}
