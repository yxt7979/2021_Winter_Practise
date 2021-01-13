#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n],b[n];
		for(int i = 0;i < n;i++) cin>>a[i];
		for(int i = 0;i < n;i++) cin>>b[i];
		sort(a,a + n);
		sort(b,b + n);
		int i = n - 1,j = n-1;
		long long ans = 0;
		while(n--){
			if(a[i] > b[j]){
				ans += a[i];
				i--;
			}
			else{
				if(k > 0){
					ans += b[j];
					j--;
					k--;
				}
				else{
					ans += a[i];
					i--;
				}
			}
		}
		cout<<ans<<endl;
	}
}
