#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9+7;

//用杨辉三角求组合数 
int C[1005][1005];
void init(){
    C[0][0] = 1;
    for(int i = 1; i <= 1000; i ++){
        C[i][0] = 1;
        for(int j = 1; j <= i; j ++) C[i][j] = (C[i - 1][j] + C[i - 1][j - 1]) % MOD;
    }
}

int main()
{
	init();
	int t;
	scanf("%d",&t);
	while(t--){
		int n,k;
		scanf("%d%d",&n,&k);
		int N[n+1] = {0};
		int num[n];
		for(int i = 0;i < n;i++){
			scanf("%d",&num[i]);
			N[num[i]] ++ ;
		}
		sort(num,num + n,greater<int>());
		map<int,int> m;
		for(int i = 0;i < k;i++){
			if(m[num[i]] == 0) m[num[i]] = 1;
			else m[num[i]] ++ ;
		}
		ll ans = 1;
		for(auto i : m){
			ans *= C[N[i.first]][i.second];
			ans %= MOD;
		}
		printf("%lld\n",ans);
	}
}
