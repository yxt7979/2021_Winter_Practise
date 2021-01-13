#include <bits/stdc++.h>
using namespace std;

const int MaxSize = 22;

int n,m;
int sx,sy;
int N[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};
int ans;

char M[MaxSize][MaxSize];
bool visited[MaxSize][MaxSize];

struct Node{
	int x,y;
};

bool ok(int x,int y){
	return x >= 0 && x < n && y >= 0 && y < m && M[x][y] == '.' && !visited[x][y];
}

void bfs(){
	int ans = 0;
	Node k;
	k.x = sx;
	k.y = sy;
	memset(visited,false,sizeof(visited));
	visited[sx][sy] = true;
	queue<Node> Que;
	Que.push(k);
	while(Que.size()){
		Node now = Que.front();
		ans ++ ;
		Que.pop();
		for(int i = 0;i < 4;i++){
			int tmpx = N[i][0] + now.x;
			int tmpy = N[i][1] + now.y;
			if(ok(tmpx,tmpy)){
				visited[tmpx][tmpy] = true;
				Node o;
				o.x = tmpx;
				o.y = tmpy;
				Que.push(o);
			}
		}
	}
	cout<<ans<<endl;
}

int main()
{
	while(cin>>m>>n){
		if(n == 0 && m == 0) break;
		for(int i = 0;i < n;i++){
			for(int j = 0;j < m;j++){
				cin>>M[i][j];
				if(M[i][j] == '@') {
					sx = i;
					sy = j;
				}
			}
		}
		bfs();
	}
	return 0;	
} 
