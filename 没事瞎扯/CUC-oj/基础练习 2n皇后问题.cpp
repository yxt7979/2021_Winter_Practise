#include <bits/stdc++.h>
using namespace std;
const int MaxSize = 20;

int n;
int visited[MaxSize][MaxSize];
int hang[4][MaxSize];
int lie[4][MaxSize];
int YX[4][MaxSize];
int ZX[4][MaxSize];
int ans = 0;

void dfs(int line,int num){
	if(num == 3 && line > n) {
		ans ++ ;
		return;
	}
	if(line > n) dfs(1,3);
	for(int i = 1;i <= n;i++){
		if(visited[line][i] && !lie[num][i] && !hang[num][line] && !YX[num][i+n-1-line] && !ZX[num][2*n-i-line]){
			visited[line][i] = 0;
			lie[num][i] = hang[num][line] = YX[num][i+n-1-line] = ZX[num][2*n-i-line] = 1;
			dfs(line + 1,num);
			visited[line][i] = 1;
			lie[num][i] = hang[num][line] = YX[num][i+n-1-line] = ZX[num][2*n-i-line] = 0;
		}
	}
}

int main()
{	
	scanf("%d",&n);
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= n;j++){
			scanf("%d",&visited[i][j]);
		}
	}
	dfs(1,2);
	printf("%d",ans);
}
