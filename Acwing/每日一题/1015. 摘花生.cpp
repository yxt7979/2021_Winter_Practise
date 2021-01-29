#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n,m;
		scanf("%d%d",&n,&m);
		int num[n+1][m+1];
		for(int i = 0;i <= m;i++){
			num[0][i] = 0;
		}
		for(int i = 0;i <= n;i++){
			num[i][0] = 0;
		}
		for(int i = 1;i <= n;i++){
			for(int j = 1;j <= m;j++){
				scanf("%d",&num[i][j]);
			}
		}
		for(int i = 1;i <= n;i++){
			for(int j = 1;j <= m;j++){
				num[i][j] += max(num[i-1][j],num[i][j-1]);
			}
		}
		printf("%d\n",num[n][m]);
	}
	return 0;
}
