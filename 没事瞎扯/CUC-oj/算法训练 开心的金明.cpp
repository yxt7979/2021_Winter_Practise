#include <bits/stdc++.h>
using namespace std;
const int M_zhong = 30;
const int M_money = 3e4 + 10;

int dp[M_zhong][M_money];

int main()
{
	int N,m;
	scanf("%d%d",&N,&m);
	for(int i = 1;i <= m;i++){
		int v,p;
		scanf("%d%d",&v,&p);
		for(int j = 1;j <= N;j++){
			if(j < v) dp[i][j] = max(dp[i][j],dp[i-1][j]);
			else{
				dp[i][j] = max(dp[i-1][j-v] + v * p,dp[i-1][j]);
			}
		}
	}
	printf("%d",dp[m][N]);
}
