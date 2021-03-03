#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n,m;
		scanf("%d%d",&n,&m);
		int M[n+1][m+1];
		int ans = 0;
		for(int i = 1;i <= n;i++){
			for(int j = 1;j <= m;j++){
				scanf("%1d",&M[i][j]);
				if(M[i][j]) ans += 3;
			}
		}
		printf("%d\n",ans);
		int dx,dy;
		for(int i = 1;i <= n;i++){
			for(int j = 1;j <= m;j++){
				if(M[i][j]){
					dx = dy = 1;
					if(i == n) dx = -1;
					if(j == m) dy = -1;
					printf("%d %d %d %d %d %d\n",i,j,i,j+dy,i+dx,j+dy);
					printf("%d %d %d %d %d %d\n",i,j,i,j+dy,i+dx,j);
					printf("%d %d %d %d %d %d\n",i,j,i+dx,j,i+dx,j+dy);
				}
			}
		}
	}
	return 0;
}
