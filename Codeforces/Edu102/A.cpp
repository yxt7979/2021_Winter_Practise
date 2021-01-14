#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n,k;
		scanf("%d%d",&n,&k);
		int num[n];
		for(int i = 0;i < n;i++) scanf("%d",&num[i]);
		sort(num,num + n);
		if(num[0] + num[1] <= k || num[n-1] <= k) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
} 
