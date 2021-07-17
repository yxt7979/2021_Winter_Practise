#include <bits/stdc++.h>
using namespace std;

int num[10];

int main()
{
	string s;
	cin>>s;
	for(int i = 0;i <s.length();i++) num[i] = s[i] - '0';
	sort(num,num+s.length());
	set<string> S;
	do{
		string tmp;
		for(int i = 0;i < s.length();i++) tmp += num[i]+'0';
		S.insert(tmp);
	}while(next_permutation(num,num+s.length()));
	for(auto i : S) cout<<i<<endl;
} 
