#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		if(a*b == c) {
			printf("yes\n");
			printf("%d %d %d\n",a,b,c);
		}else if(a*c == b) {
			printf("yes\n");
			printf("%d %d %d\n",a,c,b);
		}
		else if(c*b == a) {
			printf("yes\n");
			printf("%d %d %d\n",c,b,a);
		}
		else printf("no\n");
	}
}
