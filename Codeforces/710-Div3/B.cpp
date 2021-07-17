#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n,k;
		scanf("%d%d",&n,&k);
		string s;
		cin>>s;
		bool is_change[n];
		memset(is_change,false,sizeof is_change);
		int ans = 0;
		int pos = 0;
		for(int i = 0;i < n;i++){
			if(s[i] == '*'){
				is_change[i] = true;
				ans ++ ;
				pos = i;
				break;
			}
		}
		while(true){
			if(pos + 1 + k >= n){
				break;
			}
			int tag = -1;
			for(int i = pos + 1;i < pos + 1 + k;i++){
				if(s[i] == '*' && i > tag){
					tag = i;
				}
			}
			if(tag == -1) break;
			is_change[tag] = true;
			ans ++ ;
			pos = tag;
		}
		for(int i = n-1;i >= 0;i--){
			if(s[i] == '*'){
				if(is_change[i] == false){
					ans ++ ;
					break;
				}
				else break;
			}
		}
		printf("%d\n",ans);
	}
}

/*
10 4
*...**...*
*/
