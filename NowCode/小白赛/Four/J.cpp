#include <bits/stdc++.h>
#define f(i,a,b) for(int i=(a);i<=(b);i++)
using namespace std;
typedef long long ll;
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

int qpow(int a,int b)
{
	int ans = 1;
 	while(b)
 	{
 		if(b & 1)
 		{
 		    ans = a * ans % mod;
 		}
 		a = a % mod * a % mod;
 		a %= mod;
 		b >>= 1;
 	}
 	return ans;
}

int main()
{
	get();
//	for(int i = 1;i <= 100;i++) cout<<p[i]<<" "<<vis[p[i]]<<endl;
	int n;
	scanf("%d",&n);
	for(int i = 1;i <= n;i++) scanf("%d",&a[i]);
	for(int i = 1;i <= n;i++) scanf("%d",&b[i]);
	for(int i = 1;i <= n;i++){
		for(int j = 1;p[j] * p[j] <= a[i];j++){
			if(a[i] % p[j] == 0){
				int numm = 0;
				while(a[i] % p[j] == 0){
					a[i] /= p[j];
					numm ++ ;
				}
				mx[p[j]] = min(mx[p[j]],numm * b[i]);
				num[p[j]] ++ ;
			}
		}
		if(a[i] > 1) mx[a[i]] = min(mx[a[i]],b[i]),num[a[i]]++;
	}
	int res = 1;
	for(int i = 2;i < N ;i++){
		if(!vis[i] && num[i] >= n){
			res = res * qpow(i,mx[i]) % mod;
		}
	}
	cout<<res % mod;
	return 0;
}
