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
		ll a[n];
		for(int i = 0;i < n;i++) cin>>a[i];
		for(int i = 0;i < n;i++){
			int cnt = 0;
			ll tmp = 1;
			while((tmp << cnt) < a[i]){
				cnt ++ ;
			}
			cout<<max(1LL,(ll)pow(2,cnt-1))<<" ";
		}
		cout<<endl;
	}
}
