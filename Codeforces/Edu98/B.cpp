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
		ll a[n];
		ll sum = 0;
		ll maxx = 0;
		for(int i = 0;i < n;i++) {
			scanf("%lld",&a[i]);
			sum += a[i];
			maxx = max(maxx,a[i]);
		}
		ll ans = 0;
		if(sum % (n-1) != 0) ans = (n-1) - (sum % (n-1));
		if((sum + ans) / (n-1) >= maxx) printf("%lld\n",ans);
		else{
			printf("%lld\n",ans + maxx * (n-1) - (sum + ans));
		}
	}
	return 0;
}
