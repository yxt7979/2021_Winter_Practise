#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	string ans;
	int now = 0;
	while(cin>>s){
		if(s.length() > now){
			ans = s;
			now = s.length();
		}
	}
	cout<<ans;
}
