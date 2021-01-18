#include <bits/stdc++.h>
using namespace std;
const int MaxSize = 505;

int hpre[MaxSize][MaxSize];
char M[MaxSize][MaxSize];

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		memset(hpre,0,sizeof(hpre));
		memset(M,'.',sizeof(M));
		int n,m;
		scanf("%d%d",&n,&m);
		int ans = 0;
		for(int i = 1;i <= n;i++){
			for(int j = 1;j <= m;j++){
				cin>>M[i][j];
				if(M[i][j] == '*') {
					hpre[i][j] = 1;
					ans ++ ;
				}
				hpre[i][j] += hpre[i][j-1];
			}
		}
//		for(int i = 1;i <= n;i++){
//			for(int j = 1;j <= m;j++){
//				printf("%d ",hpre[i][j]);
//			}
//			printf("\n");
//		}
		for(int i = 1;i <= n;i++){
			for(int j = 1;j <= m;j++){
				if(M[i][j] == '*') {
					int c = 1;
					while(j - c >= 1 && i + c <= n && j + c <= m && (hpre[i+c][j+c] - hpre[i+c][j-c-1] == 2 * c + 1)){
						c ++ ;
//						printf("(%d,%d) ",i,j);
						ans ++ ;
					}
				}
			}
		}
		printf("%d\n",ans);
	}
}
