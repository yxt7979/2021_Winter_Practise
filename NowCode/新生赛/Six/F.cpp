#include<bits/stdc++.h>
#define int long long
typedef long long ll;
using namespace std;
const int mod = 998244353;

int pow(int a, int b, int c)
{
    int ans = 1;
    a = a % c;
    while(b>0)
    {
        if(b % 2 == 1)
            ans = (ans * a) % c;
        b = b/2;
        a = (a * a) % c;
    }
    ans %= c;
    return ans;
}

int niyuan(int a){
	return pow(a,mod-2,mod) % mod;
}

signed main()
{
	int n;
	cin>>n;
	n /= 4;
	if(n & 1){
		cout<<(((pow(16,n,mod) * niyuan(4) % mod) + mod) - pow(4,n,mod) * niyuan(2) % mod) % mod;
	}
	else cout<<(pow(16,n,mod) * niyuan(4) % mod + pow(4,n,mod) * niyuan(2) % mod) % mod;
}
