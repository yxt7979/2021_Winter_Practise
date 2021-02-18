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
		ll num[n];
		for(int i = 0;i < n;i++){
			scanf("%lld",&num[i]);
		}
		bool ans = true;
		for(int i = 0;i < n-1;i++){
			if(num[i] > i){
				num[i+1] += num[i] - i;
				num[i] = i;
			}
			if(num[i] >= num[i+1]){
				ans = false;
				break;
			}
		}
		if(ans && num[n-1] >= n-1) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
