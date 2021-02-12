#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int t;
	scanf("%d",&t);
	ll ans = 0;
	ll left = 1;
	while(t--){
		ll l,r;
		scanf("%lld%lld",&l,&r);
		ans = 0;left = 1;
		while(left <= l){
			ll x = l / left;
			ll right = l / x;
			right = min(x - 1,min(right,r));
//			cout<<right<<endl;
			if(right < left) break;
			int delta = right - left + 1;
			if(x - 1 > r){
				ans += r * delta;
			}
			else{
				ans += (x - 1) * delta;
			}
			ans -= ((left + right) * delta / 2);
			if(right != l/ x) break;
			left = right + 1;
		}
		printf("%lld\n",ans);
	}
	return 0;
}
