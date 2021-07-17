#include<iostream>
#include<string>
using namespace std;

int main()
{
	int t,n,num;
	string s;
	cin>>t;
	
	while(t--){
		cin>>n>>s;
		num=0;
		string ab[2];
		for(int i=0;i<n;i++)
			num+=s[i]=='0';
		if(s[0]=='0' || s[n-1]=='0' || num%2){
			puts("NO");
			continue;
		}
		int j=0;
		int tmp=0;
		for(int i=0;i<n;i++){
			if(s[i]=='1'){
				if(n-num>2*j){
					ab[0]+='('; ab[1]+='(';
				}else{
					ab[0]+=')'; ab[1]+=')';
				}
				j++;
			}else{
				ab[tmp]+='(';
				ab[!tmp]+=')';
				tmp=!tmp;	
			}	
		}
		puts("YES");
		cout<<ab[0].c_str()<<endl;
		cout<<ab[1].c_str()<<endl;
	}
	return 0;
}

