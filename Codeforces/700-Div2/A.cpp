#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		string s;
		cin>>s;
		for(int i = 0;i < s.length();i++){
			if(i % 2 == 0){
				if(s[i] == 'a') s[i] = 'b';
				else s[i] = 'a';
			}
			else{
				if(s[i] == 'z') s[i] = 'y';
				else s[i] = 'z';
			}
		}
		cout<<s<<endl;
	}
} 
