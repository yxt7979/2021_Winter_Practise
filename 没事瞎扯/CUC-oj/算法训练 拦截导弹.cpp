#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll x;
	vector<ll> V;
	while(cin>>x){
		V.push_back(x);
	}	
	ll dp[V.size()];
	ll dp2[V.size()];
	dp[V.size() - 1] = dp2[V.size() - 1] = 1;
	ll ans = 1;
	ll ans2 = 1;
	for(int i = V.size() - 2;i >= 0;i--){
		dp[i] = 1;
		dp2[i] = 1;
		for(int j = V.size() - 1;j >= i+1;j--){
			if(V[j] <= V[i]) {
				dp[i] = max(dp[i],dp[j] + 1);
			}
			else{
				dp2[i] = max(dp2[i],dp2[j] + 1);
			}
		}
		ans = max(ans,dp[i]);
		ans2 = max(ans2,dp2[i]);
	}
	printf("%lld\n%lld",ans,ans2);
	return 0;
} 
