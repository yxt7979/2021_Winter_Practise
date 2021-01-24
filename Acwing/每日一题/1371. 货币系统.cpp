#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int num,n;
	scanf("%d%d",&num,&n);
	ll dp[num+1][n+1];
	memset(dp,0,sizeof(dp));
	dp[0][0] = 1;
	for(int i = 1;i <= num;i++){
		ll k;
		scanf("%lld",&k);
		for(int j = 0;j <= n;j++){
			dp[i][j] = dp[i-1][j];
//			cout<<num<<" "<<n<<" "<<i<<" "<<j<<" "<<dp[i-1][j]<<" "<<dp[num][n]<<endl;
			if(j >= k){
				dp[i][j] += dp[i][j-k];
			}
		}
	}
	printf("%lld",dp[num][n]);
} 
