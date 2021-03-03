#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n,k;
		scanf("%d%d",&k,&n);
		ll num[n*k + 1];
		for(int i = 1;i <= n*k;i++) scanf("%lld",&num[i]);
		int cnt = 0;
		ll sum = 0;
		for(int i = n*k - (k/2);i >= 1;i -= (k/2)+1){
			cnt ++ ;
			sum += num[i];
			if(cnt == n) break;
		}
		printf("%lld\n",sum);
	}
	return 0;
}
