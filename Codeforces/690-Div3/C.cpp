#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int x;cin>>x;
		if(x >= 1 && x <= 9) cout<<x<<endl;
		else if(x >= 10 && x <= 17) cout<<9 + 10 * (x - 9)<<endl;
		else if(x >= 18 && x <= 24) cout<<89 + (x - 17) * 100<<endl;
		else if(x >= 25 && x <= 30) cout<<789 + (x - 24) * 1000<<endl;
		else if(x >= 31 && x <= 35) cout<<6789 + (x - 30) * 10000<<endl;
		else if(x >= 36 && x <= 39) cout<<56789 + (x - 35) * 100000<<endl;
		else if(x >= 40 && x <= 42) cout<<456789 + (x - 39) * 1000000<<endl;
		else if(x >= 43 && x <= 44) cout<<3456789 + (x - 42) * 10000000<<endl;
		else if(x == 45) cout<<123456789<<endl;
		else cout<<-1<<endl;
	}
}
