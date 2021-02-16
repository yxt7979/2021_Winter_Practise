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
		int ans = 0;
		for(int i = 1;(i * i - 1) <= 2 * (n - 1);i++){
			if((i * i - 1) % 2 == 0){
				ll b = (i * i - 1) / 2;
				ll c = b+1;
				if(c <= n && b >= i) {
					ans ++ ;
//					cout<<i<<" "<<b<<" "<<c<<endl;
				}
			} 
		}
		printf("%d\n",ans);
	}
	return 0;	
} 
