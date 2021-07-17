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
		ll nums[n+2];
		ll sumn = 0;
		for(int i = 0;i < n+2;i++){
			scanf("%lld",&nums[i]);
		}
		sort(nums,nums + n + 2);
		for(int i = 0;i < n;i++){
			sumn += nums[i];
		}
		int kill = 0;
		bool can = true;
		// 这里可能最后一个数不是和 
		if(sumn == nums[n+1] || sumn == nums[n]){
			kill = n;
		}
		else{
			ll sumn1 = sumn + nums[n];
			bool find = false;
			for(int i = 0;i <= n;i++){
				if(sumn1 - nums[i] == nums[n+1]){
					kill = i;
					find = true;
					break;
				}
			}
			if(!find) can = false;
		}
		if(!can) {
			printf("-1\n");
		}
		else{
			for(int i = 0;i <= n;i++){
				if(i != kill) printf("%lld ",nums[i]);
			}
			printf("\n");
		}
	}
}

