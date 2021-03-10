#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n,k;
		scanf("%d%d",&n,&k);
		string s;
		cin>>s;
		if(k * 2 >= n) {
			cout<<"NO\n";
			continue;
		}
		bool ans = true;
		for(int i = 0;i < k;i++){
			if(s[i] != s[n - 1 - i]) {
				ans = false;
				break;
			}
		}
		if(ans) cout<<"Yes\n";
		else cout<<"No\n";
	}
	return 0;
}
