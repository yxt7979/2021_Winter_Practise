#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int an,bn;
		cin>>an;
		int a[an];
		int m1 = 0,m2 = 0;
		for(int i = 0;i < an;i++) {
			cin>>a[i];
			if(i > 0) a[i] += a[i-1];
			m1 = max(m1,a[i]);
		}
		cin>>bn;
		int b[bn];
		for(int i = 0;i < bn;i++){
			cin>>b[i];
			if(i > 0) b[i] += b[i-1];
			m2 = max(m2,b[i]);
		}
		cout<<m1 + m2<<endl;
	}
}
