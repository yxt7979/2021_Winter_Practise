#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		string s;
		cin>>s;
		int numx = 0,numz = 0;
		int ans = 0;
		for(int i = 0;i < s.length();i++){
			if(s[i] == '(') numx ++ ;
			else if(s[i] == '[') numz ++ ;
			else if(s[i] == ')'){
				if(numx > 0) {
					ans ++ ;
					numx -- ;
				}
			}
			else {
				if(numz > 0){
					numz -- ;
					ans ++ ;
				}
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}
