#include <bits/stdc++.h>
using namespace std;

int main()
{
	int num;
	scanf("%d",&num);
	while(num--){
		int n;
		scanf("%d",&n);
		int N[n];
		int ans = 0;
		for(int i = 0;i < n;i++) scanf("%d",&N[i]);
		for(int i = n-1;i >= 0;i--){
			if(N[i] + i < n) N[i] += N[i + N[i]];
			ans = max(ans,N[i]);
		}
		printf("%d\n",ans);
	}
	return 0;
}
