#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		string s;
		cin>>s;
		if(n == 4){
			if(s == "2020") printf("YES\n");
			else printf("NO\n");
			continue;
		}
		bool sc = false;
		for(int i = 0;i < 5;i++){
			string tmp = s;
			string ans;
			ans += tmp.substr(0,i);
			ans += tmp.substr(n-4+i,4-i);
		//	cout<<ans<<endl;
			if(ans == "2020") {
				printf("YES\n");
				sc = true;
				break;
			}
		}
		if(!sc) printf("NO\n");
	}
	return 0;
}
