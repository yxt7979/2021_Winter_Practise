#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		ll N,x,len;
		scanf("%lld%lld",&N,&x);
		ll mid = (ll)sqrt(N);
		if(mid * (mid + 1) > N) {
			len = 2 * mid - 1;
		}
		else len = 2 * mid;
		if(x > mid){
			printf("%lld\n",len - (N/x-1));
			continue;
		}
		else {
			printf("%lld\n",x);
			continue;
		}
	}
}
