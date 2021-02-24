#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll n;
	while(cin>>n){
		if(n == 0) printf("001\n");
		else if(n == 1) printf("005\n");
		else if(n == 2) printf("025\n");
		else if(n % 2 == 1) printf("125\n");
		else printf("625\n");
	}
	return 0;	
} 
