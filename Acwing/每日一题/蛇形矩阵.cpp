#include <bits/stdc++.h>
using namespace std;
const int MaxSize = 105;

int n,m;
int M[MaxSize][MaxSize];

int main()
{
	scanf("%d%d",&n,&m);
	int left = 1,right = m,top = 1,bottom = n;
	int cnt = 1;
	while(left <= right && top <= bottom){
		for(int i = left;i <= right;i++){
			M[top][i] = cnt ++ ;
		}
		for(int i = top + 1;i <= bottom;i++){
			M[i][right] = cnt ++ ;
		}
		for(int i = right - 1;i >= left && top < bottom;i--){
			M[bottom][i] = cnt ++ ;
		}
		for(int i = bottom -1;i >= top + 1 && left < right;i--){
			M[i][left] = cnt ++ ;
		}
		left ++ ;
		right -- ;
		top ++ ;
		bottom -- ;
	}
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= m;j++){
			printf("%d ",M[i][j]);
		}
		printf("\n");
	}
	return 0;
}
