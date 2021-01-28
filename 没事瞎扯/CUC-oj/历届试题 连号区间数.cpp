#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	int num[n];
	for(int i = 0;i < n;i++) scanf("%d",&num[i]);
	int ans = 0;
	for(int i = 0;i < n;i++){
		int m = num[i],M = num[i];
		for(int j = i;j < n;j++){
			m = min(m,num[j]);
			M = max(M,num[j]);
			if((M - m) == (j - i)) ans ++ ;
		}
	}
	printf("%d",ans);
}
