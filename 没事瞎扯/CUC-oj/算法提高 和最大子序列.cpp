#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
	int n;
	scanf("%lld",&n);
	int ans = 0;
	int now = 0;
	for(int i = 0;i < n;i++){
		int x;
		scanf("%lld",&x);
		now += x;
		if(now < 0) now = 0;
		else ans = max(ans,now);
	}
	printf("%lld",ans);
} 
