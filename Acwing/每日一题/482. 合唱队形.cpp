#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	int num[n];
	for(int i = 0;i < n;i++) scanf("%d",&num[i]);
	int dp[n];
	for(int i = 0;i < n;i++){
		dp[i] = 1;
		for(int j = 0;j < i;j ++){
			if(num[j] < num[i]) dp[i] = max(dp[i],dp[j] + 1);
		}
	}
	
	int dp2[n];
	for(int i = n-1;i >= 0;i--){
		dp2[i] = 1;
		for(int j = n-1;j > i;j--){
			if(num[j] < num[i]) {
				dp2[i] = max(dp2[i],dp2[j] + 1);
			}
		}
	}
	
	int M = 1;
	for(int i = 0;i < n;i++){
		M = max(M,dp[i] + dp2[i] - 1);
	}
	printf("%d",n - M);
}
