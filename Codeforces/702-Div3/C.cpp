#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		ll num;
		scanf("%lld",&num);
		bool find = false;
		for(ll i = 1;i*i*i*2 <= num;i++){
			ll l = i,r = 10000;
			ll j;
			bool ok = false;
			while(l <= r){
				ll mid = l + (r - l) / 2;
//				cout<<mid<<" "<<mid * mid * mid + i*i*i<<" ";
				if(mid * mid * mid + i*i*i == num){
					j = mid;ok = true;
					break;
				}
				else if(mid * mid * mid + i*i*i < num) l = mid + 1;
				else r = mid - 1;
			}
			if(ok){
				find = true;
				break;
			}
		}
		if(find) printf("yes\n");
		else printf("no\n");
	}
	return 0;
}
