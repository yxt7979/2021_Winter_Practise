#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N = 1e6 + 10;
int fac[N],invfac[N],inv[N];
const int mod = 998244353;
int A[N];
int pow(int a,int b)
{
    int ans=1;
    while(b)
    {
        if(b&1)
            ans=ans*a%mod;
        a=a*a%mod;
        b>>=1;
    }
    return ans;
}
int C(int n,int m)///组合特殊情况为0也考虑了
{
    if(m>n||m<0)
        return 0;
    int a=A[n],b=A[n-m]*A[m]%mod;
    return a*pow(b,mod-2)%mod;
}
void get()///阶乘数据预处理
{
    A[0]=1;
    for(int i=1;i<N;i++)
        A[i]=A[i-1]*i%mod;
}

signed main()
{
//	init();
	get();
	int n,m;
	cin>>n>>m;
	if(m == 1) {
		cout<<0;
		return 0;
	}
	int ans = 0;
	for(int i = 1;i <= n-1;i++){
		ans = (ans + i%mod * (n-i) % mod * C((m + i - 2),i) % mod) % mod;
	}
	cout<<ans;
}
