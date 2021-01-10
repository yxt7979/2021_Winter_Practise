#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int num[n];
		for(int i = 0;i < n;i++) cin>>num[i];
		sort(num,num + n);
		ll m1 = 0;
		ll m2 = 0;
		int cnt = 1;
		for(int i = n-1;i >= 0;i--){
			if(cnt % 2 == 1){
				if(num[i] % 2 == 0) m1 += num[i];
			}
			else{
				if(num[i] % 2 != 0) m2 += num[i];
			}
			cnt ++ ;
		}
		if(m1 > m2) cout<<"Alice\n";
		else if(m1 == m2) cout<<"Tie\n";
		else cout<<"Bob\n";
	}
}
