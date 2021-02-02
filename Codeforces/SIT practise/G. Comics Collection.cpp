#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mm = 1e9 + 7;

int M[mm];

int main()
{
	int t;
	scanf("%d",&t);
	for(ll i = 1;i < mm;i++){
		int ans = M[i-1];
		if(i % 5 == 0) ans += 5;
		else if(i % 3 == 0) ans += 3;
		else if(i % 2 == 0) ans += 2;
		else ans += 1;
		M[i] = ans;
		cout<<ans<<" ";
	}
	while(t--){
		ll m;
		scanf("%lld",&m);
		printf("%d\n",M[m]);
	}
}
