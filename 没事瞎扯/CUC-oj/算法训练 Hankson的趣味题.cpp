#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b,c,d;
		scanf("%d%d%d%d",&a,&b,&c,&d);
		int ans = 0;
		for(int i = 1;i * i <= d;i++){
			if(d % i == 0){
				if(i % b == 0 && __gcd(i/b,a/b) == 1 && __gcd(d/i,d/c) == 1) ans ++ ;
				int tmp = d/i;
				if(i * i == d) continue;
				if(tmp % b == 0 && __gcd(tmp/b,a/b) == 1 && __gcd(d/tmp,d/c) == 1) ans ++ ;
			}
		}
		printf("%d\n",ans);
	}
    return 0;
}


