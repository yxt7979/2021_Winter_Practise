#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	int num[n][n];
	for(int i = 0;i < n;i++){
		for(int j = 0;j <= i;j++){
			scanf("%d",&num[i][j]);
		}
	}
	for(int i = n-2;i >= 0;i--){
		for(int j = 0;j <= i;j++){
			num[i][j] += max(num[i+1][j],num[i+1][j+1]);
		}
	}
	printf("%d",num[0][0]);
}
