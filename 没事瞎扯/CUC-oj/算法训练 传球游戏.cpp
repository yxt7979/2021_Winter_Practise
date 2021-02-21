//¼ÇÒä»¯ËÑË÷ 
#include <bits/stdc++.h>
using namespace std;
int ans = 0;
int n,m;
int C[35][35];

void dfs(int ci,int pos){
	C[pos][ci] = 0;
	if(ci == m) {
		if(pos == 0) C[pos][ci] = 1;
		return;
	}
	if(C[(pos + 1) % n][ci + 1] == -1) dfs(ci + 1,(pos + 1) % n);
	if(C[(pos - 1 + n) % n][ci + 1] == -1) dfs(ci + 1,(pos - 1 + n) % n);
	
	C[pos][ci] = C[(pos + 1) % n][ci + 1] + C[(pos - 1 + n) % n][ci + 1];
}

int main()
{
	memset(C,-1,sizeof(C));
	scanf("%d%d",&n,&m);
	dfs(0,0);
	printf("%d",C[0][0]);
}
