#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		if(c == 1) {
			printf("YES\n");
			continue;
		}
		int tmp = 1;
		bool ans = false;
		while(a % 2 == 0){
			tmp *= 2;
			if(tmp >= c){
				ans = true;
				break;
			}
			a /= 2;
		}
		if(ans) {
			printf("YES\n");
			continue;
		}
		while(b % 2 == 0){
			tmp *= 2;
			if(tmp >= c){
				ans = true;
				break;
			}
			b /= 2;
		}
		if(ans) printf("YES\n");
		else printf("NO\n");
	}
}
