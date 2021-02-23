#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MaxSize = 1e5 + 10;

ll num[MaxSize];
ll delta[MaxSize];

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n,k;
		scanf("%d%d",&n,&k);
		for(int i = 1;i <= n;i++){
			scanf("%lld",&num[i]);
		} 
		for(int i = 1;i <= n;i++){
			delta[i] = num[i] - num[i-1];
//			cout<<delta[i]<<" ";
		}
//		cout<<endl;
		int ans = 0;
		bool can = true;
		for(int i = 2;i <= n;i++){
			if(delta[i] < 0){
				if(i + k <= n+1){
					ans += -1 * delta[i];
					delta[i + k] += delta[i];
					delta[i] = 0;
				}
				else{
					can = false;
					break;
				}
			}
			else if(delta[i] > 0){
				if((i - 1) % k == 0) {
					ans += delta[i] * (i-1) / k;
					delta[1] += delta[i];
					delta[i] = 0;
				}
				else{
					can = false;
					break;
				}
			}
//			for(int i = 1;i <= n;i++) printf("%d ",delta[i]);
//			cout<<endl;
		}
		if(can) printf("%d\n",ans);
		else printf("-1\n");
	}
}

/*
1
4 1
1 2 5 3
*/
