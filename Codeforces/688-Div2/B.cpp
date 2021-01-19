#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		ll delta[n-1];
		ll per;
		scanf("%lld",&per);
		ll sum = 0;
		for(int i = 0;i <= n-2;i++){
			ll x;scanf("%lld",&x);
			delta[i] = x - per;
			sum += abs(delta[i]);
			per = x;
		}
		ll ans = sum - abs(delta[0]);
		for(int i = 0;i < n-2;i++){
			ll tmp = sum - abs(delta[i]) - abs(delta[i+1]) + abs(delta[i] + delta[i+1]);
			ans = min(ans,tmp);
		}
		printf("%lld\n",min(ans,sum - abs(delta[n-2])));
	}
	return 0;
}
