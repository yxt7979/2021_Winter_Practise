#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n,c0,c1,h;
		scanf("%d%d%d%d",&n,&c0,&c1,&h);
		string s;
		cin>>s;
		ll ans = 0;
		if(abs(c0 - c1) > h){
			char c;
			int m = min(c0,c1);
			if(m == c0) c = '1';
			else c = '0';
			int need = 0;
			for(int i = 0;i < n;i++){
				if(s[i] == c) need ++ ;
			}
			ans = need * h + n * m;
		}
		else{
			for(int i = 0;i < n;i++){
				if(s[i] == '0') ans += c0;
				else ans += c1;
			}
		}
		printf("%lld\n",ans);
	}
	return 0;
}
