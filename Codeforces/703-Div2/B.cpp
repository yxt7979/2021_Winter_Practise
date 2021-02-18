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
		ll X[n];
		ll Y[n];
		for(int i = 0;i < n;i++){
			scanf("%lld%lld",&X[i],&Y[i]);
		}
		if(n % 2 != 0) {
			printf("1\n");
			continue;
		}
		sort(X,X + n);
		sort(Y,Y + n);
		ll dx = X[n/2] - X[n/2 - 1] + 1;
		ll dy = Y[n/2] - Y[n/2 - 1] + 1;
		printf("%lld\n",dx * dy);
	}
	return 0;
}
