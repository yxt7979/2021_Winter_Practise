#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		string s;
		cin>>s;
		int numa = 0;int numb = 0;int numc = 0;
		for(int i = 0;i < s.length();i++){
			if(s[i] == 'A') numa ++ ;
			else if(s[i] == 'B') numb ++ ;
			else numc ++ ;
		}
		int M = max(numa,max(numb,numc));
		char c;
		int n = s.length();
		if(numa == M) c = 'A';
		else if(numb == M) c = 'B';
		else c = 'C';
		if((s.length() - M) == M){
			if(s[0] == c){
				int have = 0;
				bool ans = true;
				for(int i = 0;i < n;i++){
					if(s[i] == c) have ++ ;
					else{
						if(have <= 0){
							ans = false;
							printf("NO\n");
							break;
						}
						else have -- ;
					}
				}
				if(ans) printf("YES\n");
			}
			else{
				bool ans = true;
				int have = 0;
				for(int i = 0;i < n;i++){
					if(s[i] != c) have ++ ;
					else{
						if(have <= 0){
							ans = false;
							printf("NO\n");
							break;
						}
						else have -- ;
					}
				}
				if(ans) printf("YES\n");
			}
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}
