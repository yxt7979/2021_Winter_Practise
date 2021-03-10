#include <bits/stdc++.h>
using namespace std;

const int MaxSize = 30000;
int dp[MaxSize];	//到 i 时用邮票的最少数量 
int val[300];
 
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i = 1;i <= m;i++){
		scanf("%d",&val[i]);
	}
	int i = 0;
	for(i = 1;i < 30000;i++){
		dp[i] = 200;
		for(int j = 1;j <= m;j++){
			if(i - val[j] >= 0) dp[i] = min(dp[i],dp[i - val[j]] + 1);
		}
		if(dp[i] > n) break;
	}
	printf("%d",i-1);
}
