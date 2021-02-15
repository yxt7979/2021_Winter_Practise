#include <bits/stdc++.h>
using namespace std;

void solve(string z,string h){
	if(z.length() > 0){
		char c = h[h.size() - 1];
		cout<<c;
		int k = z.find(c);
		solve(z.substr(0,k),h.substr(0,k));
		solve(z.substr(k+1),h.substr(k,z.size() - k - 1));
	}
}

int main()
{
	string z,h;
	cin>>z>>h;
	solve(z,h);
}
