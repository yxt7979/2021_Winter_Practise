#include <bits/stdc++.h>
using namespace std;

int n;

string solve(int a){
	if(a == 1) return "A";
	string s;
	s = solve(a-1) + char('A'+(a-1)) + solve(a-1);
	return s;
}

int main()
{
	scanf("%d",&n);
	cout<<solve(n);	
} 
