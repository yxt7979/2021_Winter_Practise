#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	int ans = 0;
	for(int i = 0;i < n;i++){
		string s = to_string(i);
		bool can = true;
		for(int j = 0;j < s.length();j++){
			if(s[j] != '0' && s[j] != '1' && s[j] != '2') {
				can = false;
//				cout<<s[j]<<" asdfad"<<endl;
				break;
			}
		}
		if(can) ans ++ ;
	}
	printf("%d",ans);
}
