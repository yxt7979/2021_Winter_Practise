#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a,b,q;

ll qmi(){
	ll res = 1 % q;
	while(b){
		if(b & 1){
			res = res * a % q;
		}
		a = a * a % q;
		b >>= 1;
	}
	return res;
}

int main()
{
	scanf("%lld%lld%lld",&a,&b,&q);
	printf("%lld",qmi());	
}
