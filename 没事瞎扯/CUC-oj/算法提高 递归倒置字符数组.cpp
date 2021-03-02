//希望格式莫得问题）
#include <bits/stdc++.h>
using namespace std;
int n;

void solve(string &s,int pos){
	int left = n - 1 - pos;
	if(pos <= left) return;
	else {
		char tmp = s[pos];
		s[pos] = s[left];
		s[left] = tmp;
		cout<<s<<endl;
		solve(s,pos-1);
	}
}

int main()
{
	scanf("%d",&n);
	string s;
	cin>>s;
	solve(s,n-1);
	cout<<endl<<s;
	return 0;
}
