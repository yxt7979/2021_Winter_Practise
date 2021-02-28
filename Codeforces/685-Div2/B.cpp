#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int len,num;
		scanf("%d%d",&len,&num);
		string s;cin>>s;
		while(num -- ){
			int l,r;
			scanf("%d%d",&l,&r);
			bool ans = false;
			if(l != 1){
				for(int i = 0;i < l-1;i++){
					if(s[l-1] == s[i]){
						printf("yes\n");
						ans = true;
						break;
					}
				}
			}
			if(!ans && r != len){
				for(int i = r;i < len;i++){
					if(s[r-1] == s[i]){
						printf("yes\n");
						ans = true;
						break;
					}
				}
			}
			if(!ans) printf("no\n");
		}
	}
	return 0;
}
