#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	if(n == 0) return 0;
	for(int i = 1;i < n;i++) cout<<"("; 
	for(int i = 1;i <= n;i++){
		string s;
		for(int j = 1;j <= i;j++){
			if(j == 1) s += "sin(";
			else if(j % 2 == 0) s += "-sin(";
			else s += "+sin(";
			s += to_string(j);
		}
		for(int j = 1;j <= i;j++) s += ')';
		cout<<s;
		cout<<"+"<<n-i+1<<")"[i == n];
	}
}
