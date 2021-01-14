#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int t;
	cin>>t;
	while(t--){
		string a,b;
		cin>>a>>b;
		string tmpa = a;
		string tmpb = b;
		while(a.length() != b.length() || a.length() > 400){
			if(a.length() < b.length()){
				a += tmpa;
			}
			else{
				b += tmpb;
			}
		}
		if(a == b) cout<<a<<endl;
		else cout<<-1<<endl;
	}
	return 0;
} 
