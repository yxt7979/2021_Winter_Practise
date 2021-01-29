#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		int ll[n],lr[n];
		ll[0] = 1;
		for(int i = 1;i < n;i++){
			if(s[i-1] == s[i]) ll[i] = 1;
			else ll[i] = ll[i-1] + 1;
		}
		lr[n-1] = 1;
		for(int i = n-2;i >= 0;i--){
			if(s[i + 1] == s[i]) lr[i] = 1;
			else lr[i] = lr[i+1] + 1;
		}
		for(int i = 0;i <= n;i++){
			int ans = 1;
			if(i == 0){
				if(s[0] == 'R') ans += lr[0];
				cout<<ans<<" ";
			}
			else if(i == n){
				if(s[n-1] == 'L') ans += ll[n-1];
				cout<<ans<<" ";
			}
			else{
				if(s[i-1] == 'L') ans += ll[i-1];
				if(s[i] == 'R') ans += lr[i];
				cout<<ans<<" ";
			}
		}
		cout<<endl;
	}
}
