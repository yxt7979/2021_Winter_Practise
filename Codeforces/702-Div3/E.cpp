#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MaxSize = 2e5 +10;

struct peo{
	int pos;
	ll val;
}P[MaxSize];

bool cmp(peo a,peo b){
	return a.val < b.val;
}

bool cmp2(peo a,peo b){
	return a.pos < b.pos;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		for(int i = 1;i <= n;i++){
			P[i].pos = i;
			scanf("%lld",&P[i].val);
		}
//		for(int i = 1;i <= n;i++) cout<<P[i].pos<<" "<<P[i].val<<endl;
		sort(P + 1,P + 1 + n,cmp);
		ll S[n+1]; S[0] = 0;
		for(int i = 1;i <= n;i++){
			S[i] = S[i-1] + P[i].val;
		}
		ll last;
		int ans = 1;
		for(ll i = n-1;i >= 1;i--){
			if(S[i] < P[i+1].val) {
				ans = i+1;
				break;
			}
		}
		sort(P + ans,P + n + 1,cmp2);
		printf("%d\n",n - ans + 1);
		for(int i = ans;i <= n;i++){
			printf("%d ",P[i].pos);
		}
		printf("\n");
	}
	return 0;
}
