#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		ll n,k;
		scanf("%lld%lld",&n,&k);
		if(n % 2 != 0){
			ll mod = (n - 1) / 2;
			ll zu = k / mod;
			ll yu = k % mod;
			if(yu != 0) k = zu * (mod + 1) + yu;
			else k = zu * (mod + 1) - 1;
//			cout<<mod<<" "<<zu<<" "<<yu<<endl;
		}
		ll ans;
		if(k % n == 0) ans = n;
		else ans = k % n;
		printf("%lld\n",ans);
	}
	return 0;	
} 
