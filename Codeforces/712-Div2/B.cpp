#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		string s1,s2;
		cin>>s1;
		cin>>s2;
		s1 += '0';
		s2 += '0';
		int cnt = 0;
		bool finish = false;
		for(int i = 0;i < n;i++){
			cnt += ((s1[i] == '1') - (s1[i] == '0'));
			if((s1[i] == s2[i]) != (s1[i+1] == s2[i+1]) && cnt != 0){
				cout<<"NO\n";
				finish = true;
				break;
			}
		}
		if(!finish) cout<<"YES\n";
	}
}
