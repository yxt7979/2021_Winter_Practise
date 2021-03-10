#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		ll n,k;
		scanf("%lld%lld",&n,&k);
		ll num[n];
		unordered_set<ll> S;
		for(int i = 0;i < n;i++) {
			scanf("%lld",&num[i]);
			S.insert(num[i]);
		} 
		if(k == 0) {
			cout<<n<<endl;
			continue;
		}
		sort(num,num + n);
		if(num[n-1] == n-1) {
			cout<<n + k<<endl;
		}
		else{
			ll mex;
			if(num[0] != 0) mex = 0;
			else{
				for(int i = 1;i < n;i++){
					if(num[i] - num[i-1] != 1) {
						mex = num[i-1] + 1;
						break;
					}
				}
			}
			ll tmp = num[n-1] + mex;
			if(tmp % 2 == 0) tmp /= 2 ;
			else tmp = tmp/2 + 1;
			if(S.count(tmp)) cout<<n<<endl;
			else cout<<n+1<<endl;
		}
	}
	return 0;
}
