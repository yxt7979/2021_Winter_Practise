#include <algorithm>
#include <iostream>
using namespace std;
typedef long long ll;

int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	ll a[n];
	ll b[m];
	for(int i = 0;i < n;i++) scanf("%lld",&a[i]);
	for(int i = 0;i < m;i++) scanf("%lld",&b[i]);
	ll g = 0;
	for(int i = 1;i < n;i++){
		g = __gcd(g,a[i] - a[i-1]);
	}
	g = abs(g);
	for(int i = 0;i < m;i++){
		printf("%lld ",__gcd(abs(a[0] + b[i]),g));
	}
}
