#include <bits/stdc++.h>
using namespace std;
const int M_zhong = 110;
const int M_time = 1010;

//前i中物品中挑出时间不超过j的物品 
int dp[M_zhong][M_time];

int main()
{
	int T,M;
	scanf("%d%d",&T,&M);
	for(int i = 1;i <= M;i++){
		int time,val;
		scanf("%d%d",&time,&val);
		for(int j = 1;j <= T;j++){
			if(j < time) dp[i][j] = dp[i-1][j];
			else dp[i][j] = max(dp[i - 1][j - time] + val,dp[i - 1][j]);
		}
	}
	printf("%d",dp[M][T]);
}
