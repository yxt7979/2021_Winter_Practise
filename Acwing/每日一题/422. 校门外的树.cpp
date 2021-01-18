#include <bits/stdc++.h>
using namespace std;
const int MaxSize = 10010;

int delta[MaxSize];
int l,m;
int main()
{
	scanf("%d%d",&l,&m);
	delta[0] = 1;
	delta[l+1] = -1;
	for(int i = 0;i < m;i++){
		int x,y;
		scanf("%d%d",&x,&y);
		delta[x] -- ;
		delta[y+1] ++ ;
	}
	int ans = 0;
	if(delta[0] > 0) ans ++ ;
	for(int i = 1;i <= l;i++){
		delta[i] += delta[i-1];
		if(delta[i] > 0) ans ++ ;
	}
	printf("%d",ans);
}
