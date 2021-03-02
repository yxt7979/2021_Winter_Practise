#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b;
		scanf("%d%d",&a,&b);
		if(a == b) printf("%d\n",a + b);
		else{
			int m = min(a,b);
			int M = a + b - m;
			printf("%d\n",(m + m + 1) + (M - m - 1) * 2);
		}
	}
	return 0;
}
