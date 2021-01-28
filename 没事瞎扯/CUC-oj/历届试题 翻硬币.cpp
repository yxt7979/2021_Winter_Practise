#include <bits/stdc++.h>
using namespace std;

int main()
{
	string a,b;
	cin>>a>>b;
	int ans = 0;
	for(int i = 0;i < a.length() - 1;i++){
		if(a[i] != b[i]){
			ans ++ ;
			if(b[i+1] == '*') b[i+1] = 'o';
			else b[i+1] = '*';
		}
	}
	printf("%d",ans);
}
