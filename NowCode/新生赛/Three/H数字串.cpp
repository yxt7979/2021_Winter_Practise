#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int n = s.length();
	bool can = false;
	string ans;
	for(int i = 0;i < n;i++){
		if(s[i] >= 'k' && s[i] <= 's') {
			can = true;
			ans += 'a';
			ans += (char)(s[i] - 10);
		}
		else if(s[i] >= 'u' && s[i] <= 'z'){
			can = true;
			ans += 'b';
			ans += (char)(s[i] - 20);
		}
		else if(s[i] == 'a' && i+1 != n){
			if(s[i+1] >= 'a' && s[i+1] <= 'i'){
				can = true;
				ans += (char)(10 + s[i+1]);
				i++;
			}
			else ans += s[i];
		}
		else if(s[i] == 'b' && i+1 != n){
			if(s[i+1] >= 'a' && s[i+1] <= 'f'){
				can = true;
				ans += s[i+1] + 20;
				i++;
			}
			else ans += s[i];
		}
		else ans += s[i];
	} 
	if(can) cout<<ans;
	else cout<<-1;
}
/*
adfadfasda
*/
