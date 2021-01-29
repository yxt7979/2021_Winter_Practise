#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		ll L[n];
		ll a[n];
		ll b[n];
		for(int i = 0;i < n;i++) {
			scanf("%lld",&L[i]);
			L[i] -- ;
		}
		for(int i = 0;i < n;i++) scanf("%lld",&a[i]);
		for(int i = 0;i < n;i++) scanf("%lld",&b[i]);
		ll ans = 0;
		ll last = 0;
		for(int i = 1;i < n;i++){
			if(a[i] == b[i]){
				ll tmp = 2 + L[i];
				last = tmp;
				ans = max(ans,tmp);
//				cout<<"1"<<" ";
			}
			else{
				if(i == 1){
					last += abs(b[i] - a[i]) + 2 + L[i];
					ans = max(ans,last);
//					cout<<"2 ";
				}
				else{
					ll tmp1 = abs(b[i] - a[i]) + 2 + L[i];
					ll tmp2 = last - abs(b[i] - a[i]) + 2 + L[i];
					last = max(tmp1,tmp2);
					ans = max(ans,last);
//					cout<<"3 ";
				}
			}
//			cout<<ans<<endl;
		}
		printf("%lld\n",ans);
	}
	return 0;
} 
