#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int s = n / (60*60);
		if(s < 10) cout<<0<<s<<":";
		else cout<<s<<":";
		n %= 3600;
		int f = n / 60;
		if(f < 10) cout<<0<<f<<":";
		else cout<<f<<":";
		n %= 60;
		if(n < 10) cout<<0<<n<<endl;
		else cout<<n<<endl;
	}
}
