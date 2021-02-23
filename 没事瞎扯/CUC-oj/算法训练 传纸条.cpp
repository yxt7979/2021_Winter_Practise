#include <bits/stdc++.h>
using namespace std;
const int MaxSize = 53;

int M[MaxSize][MaxSize];
int num[100][MaxSize][MaxSize];
int ans = 0;
int m,n;

int main()
{
	scanf("%d%d",&m,&n);
	for(int i = 1;i <= m;i++){
		for(int j = 1;j <= n;j++){
			scanf("%d",&M[i][j]);
		}
	}	
	
	num[1][2][1] = M[2][1] + M[1][2];
	for(int i = 1;i <= m + n - 3;i++){
		for(int x1 =  2;x1 <= i + 1;x1 ++ ){
			for(int x2 = 1;x2 < x1;x2 ++ ){
				num[i][x1][x2] = max(max(num[i-1][x1][x2],num[i-1][x1-1][x2]),max(num[i-1][x1][x2 - 1],num[i-1][x1-1][x2-1])) + M[x1][i+2-x1]+ M[x2][i+2-x2];
			}
		}
	}
	printf("%d",num[m+n-3][m][m-1]);
}



