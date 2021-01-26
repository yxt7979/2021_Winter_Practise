#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int num;
		scanf("%d",&num);
		bool check = false;
		for(int i = 0;i <= num / 2021;i++){
			if((num - i * 2021)%2020 == 0) {
				check = true;
				break;
			}
		}
		if(check) cout<<"YES\n";
		else cout<<"NO\n";
	}
}
