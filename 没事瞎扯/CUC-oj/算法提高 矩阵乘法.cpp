//lyudui yyds!
#include <bits/stdc++.h>
using namespace std;
const int MaxSize = 1005;
const long long INF = 1e18;
typedef long long ll;

ll dp[MaxSize][MaxSize];

int main()
{
	int n;
	scanf("%d",&n);
	int num[n+1];
	for(int i = 0;i <= n;i++) scanf("%lld",&num[i]);
	memset(dp,0,sizeof(dp));
	//啊原来区间dp要枚举的是长度啊orz 
	for(int l = 2;l <= n;l++){
		for(int i = 1;i + l - 1 <= n;i++){
			int j = i + l - 1;
			dp[i][j] = INF;
			for(int k = i;k < j;k++){
				ll a = dp[i][k] + dp[k+1][j] + num[i - 1] * num[k] * num[j];
				if(a < dp[i][j]) dp[i][j] = a;
			}
		}
	}
	printf("%lld",dp[1][n]);
}
