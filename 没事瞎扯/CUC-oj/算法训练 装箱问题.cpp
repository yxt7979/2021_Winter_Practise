#include <bits/stdc++.h>
using namespace std;
const int MaxSize = 20010;

int dp[MaxSize];

int main()
{
	int V;
	scanf("%d",&V);
	int n;
	scanf("%d",&n);
	int w[n];
	for(int i = 0;i < n;i++) {
		scanf("%d",&w[i]);
	}
	for(int i = 0;i < n;i++){
		for(int j = V;j >= w[i];j--){
			dp[j] = max(dp[j],dp[j - w[i]] + w[i]);
		}
	}
	printf("%d",V - dp[V]);
	
}
/*
24
6
8
3
12
7
9
7
*/
