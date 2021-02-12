#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	string s;
	cin>>s;
	int mid;
	mid = (n+1) / 2;
	int ans = 0;
	bool is_dan = false;
	for(int i = 0;i < n;i++){
		char now = s[i];
		bool find = false;
		for(int j = n-1;j > i;j--){
			if(s[j] == now){
				find = true;
				int kk = j;
				while(kk < n-1){
					swap(s[kk],s[kk+1]);
					kk ++ ;
				}
				ans += (n-1) - j;
				n--;
				break;
			}
		}
		if(!find){
			if(s.length() % 2 != 0 && !is_dan){
				is_dan = true;
				ans += s.length()/2 - i;
			}
			else{
				cout<<"Impossible";
				return 0;
			}
		}
	}
	printf("%d",ans);
}
