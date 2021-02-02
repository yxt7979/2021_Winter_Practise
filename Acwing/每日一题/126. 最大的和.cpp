#include <bits/stdc++.h>
using namespace std;
const int MaxSize = 10;

int M[MaxSize][MaxSize];

int main()
{
	int n;
	scanf("%d",&n);
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= n;j++){
			scanf("%d",&M[i][j]);
			M[i][j] += M[i-1][j];
		}
	}		
	int ans = -1 * 0x3f3f3f3f;
	for(int i = 1;i <= n;i++){
		for(int j = i;j <= n;j++){
			int tmp = 0;
			for(int l = 1;l <= n;l++){
				int now = M[j][l] - M[i-1][l];
				tmp = max(tmp,0) + now;
				ans = max(ans,tmp);
			}
		}
	}
	printf("%d",ans);
} 
