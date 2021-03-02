#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 998244353;
ll qpow(ll a,ll b)
{
	ll ans=1;
	while(b)
	{
		if(b&1) ans=ans*a%mod;
		a=a*a%mod;
		b>>=1;
	}
	return (ans+mod)%mod;
}
ll inv(ll a) { return qpow(a,mod-2); }

int main()
{
	int n;
	scanf("%d",&n);
	int Fib[n+1];
	Fib[1] = Fib[2] = 1;
	for(int i = 3;i <= n;i++) Fib[i] = (Fib[i-1] + Fib[i-2]) % mod;
	printf("%lld",Fib[n] * inv(qpow(2,n) % mod + mod) % mod);
	return 0;
}
