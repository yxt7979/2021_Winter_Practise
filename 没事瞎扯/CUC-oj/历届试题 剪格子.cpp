#include <bits/stdc++.h>
using namespace std;

int num[11][11];
bool visited[11][11];
int m,n,ans = 0x3f3f3f3f,sum = 0;

struct Node{
	int x,y,nowsum,aans;
};

bool is_ok(int a,int b,int nowsum){
	return !visited[a][b] && a >= 1 && a <= n && b >= 1 && b <= m && (nowsum + num[a][b] <= sum / 2); 
}
int NN[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};

void dfs(int sx,int sy,int N,int cnt){
	if(N == sum/2){
		ans = min(ans,cnt);
		return;
	}
	if(is_ok(sx,sy,N)){
		visited[sx][sy] = true;
		for(int i = 0;i < 4;i++){
			int tmpx = sx + NN[i][0];
			int tmpy = sy + NN[i][1];
			dfs(tmpx,tmpy,N + num[sx][sy],cnt + 1);
		}
		visited[sx][sy] = false;
	}
}

//void bfs(int mid){
//	memset(visited,false,sizeof(visited));
//	queue<Node> Que;
//	Node N;
//	N.x = N.y = N.nowsum = 1;
//	N.aans = num[1][1];
//	Que.push(N);
//	visited[1][1] = true;
//	while(Que.size()){
//		Node now = Que.front();
//		if(now.aans == mid){
//			printf("%d",now.nowsum);
//			return;
//		}
//		Que.pop();
//		for(int i = 0;i < 4;i++){
//			int tmpx = now.x + NN[i][0];
//			int tmpy = now.y + NN[i][1];
//			if(is_ok(tmpx,tmpy)){
//				Node tmp;
//				tmp.x = tmpx;
//				tmp.y = tmpy;
//				tmp.aans = now.aans + num[tmpx][tmpy];
//				tmp.nowsum = now.nowsum + 1;
//				visited[tmpx][tmpy] = true;
//				Que.push(tmp);
//			}
//		}
//	}
//	printf("0");
//	return;
//}

int main()
{
	scanf("%d%d",&m,&n);
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= m;j++){
			scanf("%d",&num[i][j]);
			sum += num[i][j];
		}
	}
	if(sum % 2 != 0) {
		printf("0");
		return 0;
	}
//	bfs(sum / 2);
	memset(visited,false,sizeof(visited));
	dfs(1,1,0,0);
	if(ans == 0x3f3f3f3f) printf("0");
	else printf("%d",ans);
	return 0;
}
