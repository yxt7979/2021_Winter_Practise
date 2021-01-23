#include <bits/stdc++.h>
using namespace std;
void solve(int i){
	string s;
	while(i){
		s += '0' + (i%2);
		i /= 2;
	}
	for(int j = 0;j < 5 - s.length();j++) cout<<0;
	for(int j = s.length() - 1;j >= 0;j--) cout<<s[j];
	return;
}
int main()
{
	for(int i = 1;i <= 31;i++){
		solve(i);
		if(i != 31) cout<<endl;
	}
}
