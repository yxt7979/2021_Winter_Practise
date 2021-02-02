#include <bits/stdc++.h>
using namespace std;

int M[50][50];
int cnt,t,n,N;

void solve(){
	for(int i = 1;i <= N;i++){
		bool check[N + 1];
		memset(check,false,sizeof(check));
		for(int j = 1;j <= N;j++){
			if(check[M[i][j]] == true){
				printf("Case #%d: No\n",cnt);
				return;
			}
			else check[M[i][j]] = true;
		}
	}
	for(int i = 1;i <= N;i++){
		bool check[N + 1];
		memset(check,false,sizeof(check));
		for(int j = 1;j <= N;j++){
			if(check[M[j][i]] == true){
				printf("Case #%d: No\n",cnt);
				return;
			}
			else check[M[j][i]] = true;
		}
	}
	for(int i = 1;i < N;i += n){
		for(int j = 1;j < N;j += n){
			bool check[N + 1];
			memset(check,false,sizeof(check));
			for(int k = 0;k < n;k++){
				for(int p = 0;p < n;p++){
					if(check[M[i+k][j+p]] == true){
						printf("Case #%d: No\n",cnt);
						return;
					}
					else check[M[i+k][j+p]] = true;
				}
			}
		}
	}
	printf("Case #%d: Yes\n",cnt);
}
int main()
{
	scanf("%d",&t);
	cnt = 1;
	while(t--){
		scanf("%d",&n);
		N = n * n;
		bool ans = true;
		for(int i = 1;i <= N;i++){
			for(int j = 1;j <= N;j++){
				scanf("%d",&M[i][j]);
				if(M[i][j] > N) ans = false;
			}
		}
		if(!ans) {
			printf("Case #%d: No\n",cnt);
			cnt ++ ;
			continue;
		}
		solve();
		cnt ++ ;
	}
}
