#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		ll n,m,x;
		scanf("%lld%lld%lld",&n,&m,&x);
		ll yushu = x % n;
		ll lie = x/n;
		if(yushu == 0){
			yushu = n;
			lie -= 1;
		}
		ll ans = yushu * m - (m - lie - 1);
		printf("%lld\n",ans);
	}
	return 0;
}
