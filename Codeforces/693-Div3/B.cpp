#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int num[n];
		int n1 = 0,n2 = 0;
		int sum = 0;
		for(int i = 0;i < n;i++){
			cin>>num[i];
			sum += num[i];
			if(num[i] == 1) n1 ++ ;
			else n2 ++ ;
		}
		if(sum % 2 != 0 || (sum % 2 == 0 && sum % 4 != 0 && n1 == 0)) cout<<"NO\n";
		else cout<<"YES\n";
	}
}
