#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
	int t;
	scanf("%lld",&t);
	while(t--){
		int n;
		scanf("%lld",&n);
		int numa[n];
		int numb[n];
		for(int i = 0;i < n;i++) scanf("%lld",&numa[i]);
		for(int i = 0;i < n;i++) scanf("%lld",&numb[i]);
		sort(numa,numa + n,less<int>());
		sort(numb,numb + n,greater<int>());
		int ans = 0;
		for(int i = 0;i < n;i++) ans += numa[i] * numb[i];
		cout<<ans<<endl;
	}
}
