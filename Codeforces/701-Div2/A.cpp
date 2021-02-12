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
		if(a == b) {
			printf("2\n");
			continue;
		}
		if(a < b){
			printf("1\n");
			continue;
		}
		ll ans = 0x3f3f3f3f;
		if(b <= 1000){
			for(ll i = b;i <= 1000;i++){
				if(i == 1) continue;
				ll tmpans = 0;
				tmpans += i-b;
				ll tmpa = a;
				while(tmpa){
					tmpa /= i;
					tmpans ++ ;
				}
				ans = min(ans,tmpans);
	//			cout<<ans<<endl;
			}
			printf("%lld\n",ans);
			continue;
		}
		else{
			ll ans = 0;
			while(a){
				a /= b;
				ans ++ ;
			}
			printf("%lld\n",ans);
			continue;
		}
	}
}
