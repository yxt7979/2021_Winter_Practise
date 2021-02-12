#include<bits/stdc++.h>
using namespace std;
#define N 4000010 
#define ll long long
int num[N], prim[4000015]; 
int pn = 0;
int n;
const ll Mod = 1e9 + 7;

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
bool is_prime[4000010];
int prime[4000010];

int get_prime(int n)
{
    int i,j,p=0,flag;
    memset(is_prime,true,sizeof(is_prime));
    is_prime[0]=is_prime[1]=false;
    for(i=2; i<=n; i++)
    {
        if(is_prime[i])
        {
            prime[p++]=i;
            for(j=i*2; j<=n; j+=i)
                is_prime[j]=false;
        }
    }
    return p;
}

int main(){
    table();
    scanf("%d",&n);
    get_prime(n+5);
    ll ans = 0;
    for(int i = 2;i <= n;i++){
    	int tmp = i;
    	if(is_prime[tmp] == true){
    		ans = (ans + tmp) % Mod;
    		continue;
		}
    	string s;
    	for(int j = 0;prim[j] <= tmp;j++){
    		while(tmp % prim[j] == 0){
    			s += to_string(prim[j]);
    			tmp /= prim[j];
			}
			if(is_prime[tmp] == true){
				s += to_string(tmp);
				break;
			}
			if(tmp == 1) break;
		}
		ans = (ans + stoll(s,0,10)) % Mod;
	}
	printf("%lld",ans);
}
