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
		if((n % 2 != 0) || s[0] != '1' || s[n-1] != '1') {
			cout<<"NO\n";
			continue;
		}
		int cnt0 = 0;
		for(int i = 0;i < n;i++){
			if(s[i] == '0') cnt0 ++ ;
		}
		int cnt1 = n - cnt0;
		if(cnt0 % 2 != 0){
			cout<<"NO\n";
			continue;
		}
		
		int ans1[n];
		int ans2[n];
		memset(ans1,0,sizeof ans1);
		memset(ans2,0,sizeof ans2);
		int tmp = 0;
		int ch = -1;
		for(int i = 0;i < n;i++){
			if(s[i] == '1'){
				tmp ++ ;
				if(tmp <= cnt1 / 2){
					ans1[i] = ans2[i] = 1;
				}
				else{
					ans1[i] = ans2[i] = -1;
				}
			}
			else{
				if(ch == -1){
					ans1[i] = 1;
					ans2[i] = -1;
				}
				else{
					ans2[i] = 1;
					ans1[i] = -1;
				}
				ch = -1 * ch;
			}
		}
		cout<<"YES\n";
		for(int i = 0;i < n;i++){
			if(ans1[i] == 1) cout<<"(";
			else cout<<")";
		}
		cout<<"\n";
		for(int i = 0;i < n;i++){
			if(ans2[i] == 1) cout<<"(";
			else cout<<")";
		}
		cout<<"\n";
	}
}
