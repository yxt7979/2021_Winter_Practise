#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll P[12];
void pre(int di){
	for(int i = 0;i < 11;i++){
		P[i] = pow(di,i);
	}
}

int main()
{
	int k,n;
	scanf("%d%d",&k,&n);
	pre(k);
	ll ans = 0;
	int tmp = n;
	int now = 0;
	while(tmp){
		if(tmp & 1) ans += P[now];
		now ++ ;
		tmp >>= 1;
	}
	printf("%lld",ans);
}
