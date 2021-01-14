#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MaxSize = 43000000;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		ll a,b,c,sum = 0;
		scanf("%lld%lld%lld",&a,&b,&c);
		sum += a + b + c;
		if(sum % 9 != 0 || a < sum / 9 || b < sum / 9 || c < sum / 9) cout<<"NO\n";
		else cout<<"YES\n";
	}
	return 0;
} 
