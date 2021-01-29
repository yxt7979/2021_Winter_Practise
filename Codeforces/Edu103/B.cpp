#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		int k;
		cin>>n>>k;
		ll num[n];
		ll sum[n];
		for(int i = 0;i < n;i++){
			scanf("%lld",&num[i]);
			if(i == 0) sum[0] = num[0];
			else sum[i] = sum[i-1] + num[i];
		}
		ll ans = 0;
		for(int i = 0;i < n-1;i++){
			if(num[i+1] * 100.0 / sum[i] <= k * 1.0) {
				continue;
			}
			double tmp = num[i+1] * 100.0 / k - sum[i];
			if(tmp - (ll)tmp > 0.00) tmp ++ ;
			ans = max(ans,(ll)tmp);
		}
		printf("%lld\n",ans);
	}
	return 0;
} 
