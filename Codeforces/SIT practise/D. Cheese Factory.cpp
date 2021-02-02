#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int a[3];
		int b[3];
		for(int i = 0;i < 3;i++) scanf("%d",&a[i]);
		for(int i = 0;i < 3;i++) scanf("%d",&b[i]);
		sort(a,a+3);
		sort(b,b+3);
		int ans = 0;
		for(int i = 0;i < 3;i++) ans += a[i] * b[i];
		printf("%d\n",ans);
	}
}
