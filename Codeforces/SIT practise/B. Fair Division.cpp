#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		ll n;
		scanf("%lld",&n);
		if((n+3) % 3 == 0){
			printf("%lld %lld %lld\n",(n+3)/3-2,(n+3)/3-1,(n+3)/3);
		}
		else printf("-1\n");
	}
}
