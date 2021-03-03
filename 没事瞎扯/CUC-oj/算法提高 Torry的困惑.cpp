#include <bits/stdc++.h>
#define int long long
using namespace std;
#define N 2000000 
const int mod = 50000;

int num[N], prim[N]; 
int pn = 0;
void table(){
    memset(num, -1, sizeof(num));
    for(int i = 2;i < N;i++){
        if(num[i]) prim[pn++] = i;
        for(int j = 0;j < pn && 1LL*i*prim[j] < N;j++){
            num[i*prim[j]] = 0;
            if(i % prim[j] == 0) break;
        }
    }
}

signed main()
{
	table();
	int n;
	scanf("%lld",&n);
//	for(int i = 0;i < n;i++) cout<<prim[i]<<" ";
	int ans = 2;
    for(int i = 1;i < n;i++) {
    	ans = (ans * prim[i]) % mod;
    	ans %= mod;
	}
	printf("%lld",ans);
}

