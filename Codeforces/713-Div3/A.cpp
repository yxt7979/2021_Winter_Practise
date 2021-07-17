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
		int nums[n+1];
		for(int i = 1;i <= n;i++){
			scanf("%d",&nums[i]);
		}
		if(nums[1] == nums[2]){
			for(int i = 3;i <= n;i++){
				if(nums[i] != nums[1]){
					printf("%d\n",i);
					break;
				}
			}
		}
		else{
			if(nums[1] == nums[3]){
				printf("2\n");
			}
			else{
				printf("1\n");
			}
		}
	}
	return 0;
} 
