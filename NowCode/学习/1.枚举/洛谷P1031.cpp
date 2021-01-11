#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	int num[n+1];
	int all = 0;
	int ans = 0; 
	for(int i = 1;i <= n;i++){
		scanf("%d",&num[i]);
		all += num[i]; 
	}
	int mod = all / n;
	for(int i = 1;i <= n;i++){
		num[i] = mod - num[i];
	}
	for(int i = 1;i < n;i++){
		if(num[i] != 0) {
			ans ++ ;
			num[i+1] += num[i];
		}
	}
	cout<<ans;
}
