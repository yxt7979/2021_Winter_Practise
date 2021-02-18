#include <bits/stdc++.h>
using namespace std;

int main()
{
	int L,m;
	scanf("%d%d",&L,&m);
	int delta[L+2];
	memset(delta,0,sizeof(delta));
	delta[0] = 1;
	delta[L + 1] = -1;
	for(int i = 0;i < m;i++){
		int a,b;
		scanf("%d%d",&a,&b);
		delta[a] -- ;
		delta[b+1] ++ ;
	}
	int ans = 0;
	if(delta[0] > 0) ans ++ ;
	int now = delta[0];
	for(int i = 1;i <= L;i++){
		if(delta[i]  + now > 0 ) ans ++ ;
		now += delta[i];
	}
	printf("%d",ans);
}
