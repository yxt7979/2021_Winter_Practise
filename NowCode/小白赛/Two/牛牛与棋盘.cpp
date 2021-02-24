#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	string s1;
	for(int i = 0;i < n;i++){
		if(i % 2 == 0) s1 += '0';
		else s1 += '1';
	}	
	string s2;
	for(int i = 0;i < n;i++){
		if(i % 2 == 0) s2 += '1';
		else s2 += '0';
	}
	for(int i = 0;i < n;i++){
		if(i % 2 == 0) cout<<s1;
		else cout<<s2;
		cout<<endl;
	}
} 
