#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		ll a,b,k;
		scanf("%lld%lld%lld",&a,&b,&k);
		int Na[a+1] = {0};
		int Nb[b+1] = {0};
		int Ex[k];
		int Ey[k];
		for(int i = 0;i < k;i++){
			scanf("%d",&Ex[i]);
			Na[Ex[i]]++;
		}
		for(int i = 0;i < k;i++){
			scanf("%d",&Ey[i]);
			Nb[Ey[i]]++;
		}
		ll ans = 0;
		for(int i = 0;i < k;i++){
			ans += k - Na[Ex[i]] - Nb[Ey[i]] + 1;
		}
		printf("%lld\n",ans/2);
	}
}
