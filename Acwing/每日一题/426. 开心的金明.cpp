#include <bits/stdc++.h>
using namespace std;
const int M = 35;
int N,m;
int p[M];
int v[M];
int dp[M][30010];

int main()
{
	scanf("%d%d",&N,&m);
	for(int i = 1;i <= m;i++){
		scanf("%d%d",&p[i],&v[i]);
	}
	int ans = 0;
	for(int i = 1;i <= m;i++){
		for(int j = 0;j <= N;j++){
			dp[i][j] = dp[i-1][j];
			if(j >= p[i]) dp[i][j] = max(dp[i][j],dp[i-1][j-p[i]] + v[i]*p[i]);
			ans = max(ans,dp[i][j]);
		}
	}
	printf("%d",ans);
} 
