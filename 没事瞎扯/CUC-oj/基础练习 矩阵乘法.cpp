#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MaxSize = 35;

ll M[MaxSize][MaxSize];
ll ans[MaxSize][MaxSize];
ll n,m;

void solve(){
	ll tmp[MaxSize][MaxSize];
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= n;j++){
			tmp[i][j] = 0;
			for(int k = 1;k <= n;k++){
				tmp[i][j] += ans[i][k] * M[k][j];
			}
		}
	}
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= n;j++){
			ans[i][j] = tmp[i][j];
		}
	}
}

int main(){
	scanf("%lld%lld",&n,&m);
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= n;j++){
			scanf("%lld",&M[i][j]);
			ans[i][j] = M[i][j];
		}
	}
	if(m == 0){
		for(int i = 1;i <= n;i++){
			for(int j = 1;j <= n;j++){
				if(i != j)printf("0 ");
				else printf("1 ");
			}
			printf("\n");
		}
		return 0;
	}
	for(int i = 0;i < m-1;i++){
		solve();
	}
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= n;j++){
			printf("%lld ",ans[i][j]);
		}
		printf("\n");
	}
} 
