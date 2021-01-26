#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int num;
	scanf("%d",&num);
	while(num -- ){
		ll n;
		scanf("%lld",&n);
		while(n % 2 == 0){
			n /= 2;
		}
		if(n == 1)cout<<"NO\n";
		else cout<<"YES\n";
	} 
}
