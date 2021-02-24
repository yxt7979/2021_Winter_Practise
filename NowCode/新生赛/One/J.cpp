#include<bits/stdc++.h>
using namespace std;
#define N 80010000
typedef long long ll;
const ll Mod = 1e9 + 7;

int num[N], prim[5000060];
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

int main(){
    table();
//  for(int i = 0;i < 1000;i++) cout<<prim[i]<<" ";
	ll ans = 1;
	ll n;
	scanf("%lld",&n);
	if(n < 6) {
		printf("empty");
		return 0;
	}
	for(int i = 1;prim[i] <= n/2;i++){
//		if(prim[i] == 2){
//			ll tmp = 1;
//			while(tmp*prim[i] <= n/3){
//				tmp *= 2;
//			}
//			ans = ans * tmp % Mod;
//		}
//		else{
			ll tmp = 1;
			while(tmp * prim[i] <= n/2){
				tmp *= prim[i];
			}
			ans = ans * tmp % Mod;
//		}
	}
	ll tmp2 = 1;
	while(tmp2 * 2 <= n/3) tmp2 *= 2;
	ans = ans * tmp2 % Mod;
	printf("%lld",ans);
}
