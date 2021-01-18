#include <bits/stdc++.h>
using namespace std;

int main()
{
	string a,b;
	cin>>a>>b;
	int n = a.length();
	int ans = 0;
	for(int i = 0;i < n-1;i++){
		if(a[i] != b[i]){
			a[i] = b[i];
			if(a[i+1] == 'o') a[i+1] = '*';
			else a[i+1] = 'o';
			ans ++ ;
		}
	}
	printf("%d",ans);
}
