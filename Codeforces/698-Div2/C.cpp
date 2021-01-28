#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll t;
	scanf("%lld",&t);
	while(t--){
		ll n;
		scanf("%lld",&n);
		map<ll,ll> M;
		ll num[n];
		ll cnt = 0;
		bool wrong = false;
		for(ll i = 0;i < 2 * n;i++){
			ll x;
			scanf("%lld",&x);
			if(x % 2 != 0){
				wrong = true;
			}
			if(M[x] == 0){
				num[cnt ++ ] = x;
				M[x] = 1;
			}
			else if(M[x] == 1){
				M[x] = 2;
			}
			else{
				wrong = true;
			}
		}
		if(cnt != n || wrong) {
			printf("no\n");
			continue;
		}
		sort(num,num + n);
		ll sum = 0;
		bool ans = true;
		if(num[n-1] % (2 * n) != 0 ) ans = false;
		for(ll i = n-1;i >= 0;i--){
			ll mod = i+1;
			if((num[i] - sum) / mod == 0 || (num[i] - sum) % (2 * mod) != 0 || num[i] - sum <= 0){
				ans = false;
				break;
			}
			else{
				sum += (num[i] - sum) / mod;
			}
		}
		if(ans) printf("yes\n");
		else printf("no\n");
	}
}
