#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M = 100010;
ll num[M];
ll check[M];

int main()
{
	ll n,q,k;
	scanf("%lld%lld%lld",&n,&q,&k);
	for(ll i = 1;i <= n;i++){
		scanf("%lld",&num[i]);
	}
	num[0] = 0;
	num[n+1] = k+1;
	for(ll i = 1;i <= n;i++){
		check[i] = num[i+1] - num[i-1] - 2;
	}
//	cout<<check[1]<<" ";
	for(ll i = 2;i <= n;i++){
		check[i] += check[i-1];
//		cout<<check[i]<<" ";
	}
//	cout<<endl;
	while(q--){
		ll l,r;
		scanf("%lld%lld",&l,&r);
		if(l == r){
			printf("%lld\n",k-1);
			continue;
		}
		ll ans = 0;
		ans += num[l+1]-2;
		ans += k - num[r-1] - 1;
		if(r - l > 1){
			ans += check[r-1] - check[l];
		}
		printf("%lld\n",ans);
	}
}
