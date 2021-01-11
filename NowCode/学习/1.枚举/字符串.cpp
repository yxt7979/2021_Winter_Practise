#include <bits/stdc++.h>
using namespace std;
int check[26] = {0};
int main()
{
	string s;
	cin>>s;
	int n = s.length();
	int cnt = 0;
	int l = 0;
	int ans = n+1;
	for(int r = 0;r < n;r++){
		if(check[s[r] - 'a'] == 0)cnt ++ ;
		check[s[r] - 'a'] ++ ;
		
		while(check[s[l] - 'a'] > 1){
			check[s[l] - 'a'] -- ;
			l ++ ;
		} 
		if(cnt == 26) ans = min(ans,r - l + 1);
	}
	cout<<ans;
}
