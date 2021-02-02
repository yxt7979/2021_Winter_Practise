#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		ll x;
		scanf("%lld",&x);
		if(x % 2 == 0) printf("%lld\n",(x/2+1) * (x/2+1));
		else printf("%lld\n",(((x+1)/2+1) * (x/2+1)));
	}
}
