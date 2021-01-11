#include <bits/stdc++.h>
using namespace std;

bool cmp(string a,string b){
	return a + b > b + a;
}

int main()
{
	int n;
	scanf("%d",&n);
	string s[n];
	for(int i = 0;i < n;i++) cin>>s[i];
	sort(s,s + n,cmp);
	string ans;
	for(int i = 0;i < n;i++){
		ans += s[i];
	}
	cout<<ans;
}
