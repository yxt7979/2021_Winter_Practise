#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n[2] = {0,0};
		scanf("%d%d",&n[0],&n[1]);
		string s;
		cin>>s;
		bool can = true;
		if(n[0] + n[1] != s.length()){
			cout<<"-1\n";
			continue;
		}
		for(int i = 0;i <= (s.length()-1)/2;i++){
			if(s[i] != s[s.length()-1-i] && (s[i] != '?' && s[s.length()-1-i] != '?')){
				can = false;
				break;
			}
		}
		for(int i = 0;i < s.length();i++){
			if(s[i] != '?'){
				n[s[i] - '0']-- ;
				if(n[s[i] - '0'] < 0){
					can = false;
					break;
				}
			}
		}
		if(!can){
			cout<<-1<<endl;
			continue;
		}
		for(int i = 0;i <= (s.length()-1)/2;i++){
			if(s[i] != s[s.length()-1-i]){
				if(s[i] == '?'){
					if(n[s[s.length()-1-i] - '0'] > 0){
						s[i] = s[s.length()-1-i];
						n[s[s.length()-1-i] - '0'] -- ;
					}
					else{
						can = false;
						break;
					}
				}
				else{
					if(n[s[i] - '0'] > 0){
						s[s.length()-1-i] = s[i];
						n[s[i] - '0'] -- ;
					}
					else{
						can = false;
						break;
					}
				}
			}
		}
		if(!can){
			cout<<-1<<endl;
			continue;
		}
//		cout<<n[0]<<" "<<n[1]<<endl;
		if(s.length() % 2 == 0){
			if(n[0] % 2 != 0 || n[1] % 2 != 0){
				cout<<-1<<endl;
				continue;
			}
			else{
				for(int i = 0;i <= (s.length()-1)/2;i++){
					if(s[i] == '?'){
						if(n[0] != 0){
							s[i] = s[s.length()-1-i] = '0';
							n[0] -= 2;
						}
						else{
							s[i] = s[s.length()-1-i] = '1';
							n[1] -= 2; 
						}
					}
				}
			}
		}
		else{
			if((n[0] + n[1]) % 2 == 0 && s[(s.length() - 1)/2] == '?'){
				cout<<-1<<endl;
				continue;
			}
			else{
				if(s[(s.length() - 1)/2] == '?'){
					if(n[0] % 2 != 0){
						s[(s.length() - 1)/2] = '0';
						n[0] -- ;
					}
					else{
						s[(s.length() - 1)/2] = '1';
						n[1] -- ;
					}
				}
				for(int i = 0;i <= (s.length()-1)/2;i++){
					if(s[i] == '?'){
						if(n[0] != 0){
							s[i] = s[s.length()-1-i] = '0';
							n[0] -= 2;
						}
						else{
							s[i] = s[s.length()-1-i] = '1';
							n[1] -= 2;
						}
					}
				}	
			}
		}
		//这个地方！！一定要注意如果剩了0或1也不行 
		if(n[0] != 0 || n[1] != 0) {
			cout<<"-1\n";
		}
		else
			cout<<s<<endl;
	}	
} 

/*
1
3 0
???
*/


