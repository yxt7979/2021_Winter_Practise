#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int ans = 0;
	int mod = 1;
	for(int i = 0;i < s.length() - 2;i++){
		if(i != 1 && i != 5){
			ans = (ans + (s[i] - '0') * mod) % 11;
			mod ++ ;
		}
	}
	if(ans == 10 && s[s.length() - 1] == 'X') cout<<"Right";
	else if(ans == 10){
		s[s.length() - 1] = 'X';
		cout<<s;
	}
	else if(s[s.length() - 1] == '0'+ans) cout<<"Right";
	else {
		s[s.length() - 1] = '0' + ans;
		cout<<s;
	}
}
