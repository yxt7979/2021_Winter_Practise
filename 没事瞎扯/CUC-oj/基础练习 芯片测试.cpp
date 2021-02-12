#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	bool can[n+1];
	int M[n+1][n+1];
	memset(can,true,sizeof(can));
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= n;j++){
			scanf("%d",&M[i][j]);
		}
	}	
	for(int i = 1;i <= n;i++){
		if(can[i] == true){
			for(int j = 1;j <= n;j++){
				if(M[i][j] == 0) can[j] = false;
			}
		}
	}
	for(int i = 1;i <= n;i++){
		if(can[i]) printf("%d ",i);
	}
	return 0;
} 
