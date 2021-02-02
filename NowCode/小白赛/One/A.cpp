#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll Mod = 1e9 + 7;
const int MaxSize = 1e6 + 10;
ll dp[MaxSize][3];
int main()
{
	int n;
	cin>>n;
	dp[1][0] = 25;
	dp[1][1] = 1;
	dp[1][2] = 0;
	ll ans = 0;
	for(int i = 2;i <= n;i++){
		dp[i][0] = dp[i-1][0] * 25 % Mod;
		dp[i][1] = (dp[i-1][1] * 25 + dp[i-1][0]) % Mod;
		dp[i][2] = (dp[i-1][2] * 26 + dp[i-1][1]) % Mod;
		ans = (ans + dp[i][2]) % Mod;
	}
	cout<<ans;
} 
