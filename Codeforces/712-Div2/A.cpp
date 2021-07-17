#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		string s;
		cin>>s;
		bool is = false;
		int pos = 0;
		for(int i = 0;i < s.length();i++){
			if(s[i] != 'a'){
				pos = i;
				is = true;
			}
		}
		if(!is) cout<<"NO\n";
		else{
			cout<<"YES\n";
			int spa = -1; 
			if(pos >= s.length()/2){
				spa = (s.length() - pos - 1);
			}
			else{
				spa = s.length() - pos;
			}
			for(int i = 0;i < s.length();i++){
				if(i == spa) cout<<'a';
				cout<<s[i];
			}
			if(spa == s.length()) cout<<'a';
			cout<<"\n";
		}
	}
}
//l = 2
//01

