#include <bits/stdc++.h>
using namespace std;

int main()
{
	int S,t,w;
	string s;
	cin>>S>>t>>w;
	cin>>s;
	for(int i = 0;i < 5;i++){
		for(int j = s.length() - 1;j >= 0;j--){
			if(s[j] + 1 <= 'a' + t - 1 && s[j] + 1 >= 'a' + S - 1){
				bool is_have = false;
				for(int k = j + 1;k < s.length();k++){
					if(s[k] == s[j] + 1) {
						is_have = true;
						break;
					}	
				}
				if(!is_have){
					for(int k = j;k < s.length();k++){
						if(k == j)s[k] = s[k] + 1;
						else s[k] = s[k-1] + 1;
					}
					cout<<s<<endl;
					break;
				}
			}
		}
	}
}
