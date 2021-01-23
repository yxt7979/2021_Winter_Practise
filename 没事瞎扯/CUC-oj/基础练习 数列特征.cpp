#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	int num[n];
	long long ans = 0;
	int m = 1e6;
	int M = -1 * m;
	for(int i = 0;i < n;i++){
		scanf("%d",&num[i]);
		ans += num[i];
		m = min(m,num[i]);
		M = max(M,num[i]);
	}
	printf("%d\n%d\n%lld",M,m,ans);
}
