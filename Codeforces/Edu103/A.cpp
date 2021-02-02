#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		ll a,b;
		scanf("%lld%lld",&a,&b);
		if(a == b) printf("1\n");
		else if(a < b){
			if(b % a != 0) printf("%lld\n",b/a + 1);
			else printf("%lld\n",b/a);
		}
		else{
			if(a % b == 0) b = a;
			else b = (a / b) * b + b;
			if(b % a != 0) printf("%lld\n",b/a + 1);
			else printf("%lld\n",b/a);
		}
	}
	return 0;
} 
