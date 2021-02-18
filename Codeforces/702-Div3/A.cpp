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
		int num[n];
		ll ans = 0;
		for(int i = 0;i < n;i++) scanf("%d",&num[i]);
		for(int i = 0;i < n-1;i++){
			int M = max(num[i],num[i+1]);
			int m = min(num[i],num[i+1]);
			if(m * 2 < M){
				while(M > m * 2){
					M = (M + 1) / 2;
					ans ++ ;
				}
			}
		}
		printf("%lld\n",ans);
	}
	return 0;
}
