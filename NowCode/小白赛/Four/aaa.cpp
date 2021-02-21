#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define ld long double
#define LLMax LLONG_MAX
#define LLMin LLONG_MIN
#define Max INT_MAX
#define Min INT_MIN
#define f1(i,a,b) for(int i=(a);i<(b);i++)
#define f(i,a,b) for(int i=(a);i<=(b);i++)
#define DWN(j,b,a) for(int j=(b);j>=(a);j--)
#define ste1(a) memset(a,-1,sizeof(a))
#define set0(a) memset(a,0,sizeof(a))
#define IOS ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

using namespace std;
const int mod=1e9+7;
const int N = 1e4 + 1000;
int a[N], b[N];
int p[N + 1], cnt;
bool vis[N + 1];
int mx[N],num[N];
void get() {
	f(i, 2, N) {
		if (!vis[i])p[++cnt] = i;
		for (int j = 1;p[j] <= N / i;j++) {
			vis[p[j] * i] = true;
			if (i%p[j] == 0)break;
		}
	}f(i, 1, N - 1)mx[i] = 1e9;
}

int pow(int a,int b)
{
	int ans=1;
 	while(b)
 	{
 		if(b&1)
 		{
 			ans=a*ans%mod;
 		}
 		a=a%mod*a%mod;
 		a%=mod;
 		b>>=1;
 	}
 	return ans;
}

signed main()
{
	get();
//	for(int i = 1;i <= 100;i++) cout<<p[i]<<" ";
	int n;
   cin>>n;	
	f(i, 1, n)cin>>a[i];
	f(i, 1, n)cin>>b[i];
	f(i, 1, n) {
		for (int j = 1;p[j] * p[j] <= a[i];j++) {
			if (a[i] % p[j] == 0) {
				int numm = 0;
				while (a[i] % p[j] == 0) {
					a[i] /= p[j];
					numm++;
				}
				mx[p[j]] = min(mx[p[j]], numm*b[i]);
				num[p[j]]++;
			}
		}
		if (a[i] > 1)mx[a[i]] = min(mx[a[i]], b[i]), num[a[i]]++;
	}
	int res = 1;
	f(i, 2, N-1) {
		if (!vis[i]&&num[i]==n) {
			res = res * pow(i, mx[i]) % mod;
		}
	}
	cout << res << endl;
	return 0;
}
