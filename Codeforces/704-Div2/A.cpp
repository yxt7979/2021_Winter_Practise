#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		ll p,a,b,c;
		cin>>p>>a>>b>>c;
		if(p % a == 0 || p % b == 0 || p % c == 0) {
			cout<<0<<endl;
			continue;
		}
		ll k1 = a - p % a;
		ll k2 = b - p % b;
		ll k3 = c - p % c;
		cout<<min(k1,min(k2,k3))<<endl;	
	}
	return 0;
}
