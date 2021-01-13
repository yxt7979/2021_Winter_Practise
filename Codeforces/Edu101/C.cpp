#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n,k;
		scanf("%d%d",&n,&k);
		int h[n];
		for(int i = 0;i < n;i++) scanf("%d",&h[i]);
		int d = h[0];
		int u = h[0];
		bool ans = true;
		for(int i = 1;i < n-1;i++){
//			cout<<"d : "<<d<<" u : "<<u<<endl;
			int ru = h[i] + k - 1;
			int rd = h[i];
			int nowd = d - k + 1;
			int nowu = u + k - 1;
//			cout<<"should : ("<<rd<<","<<ru<<"),now : ("<<nowd<<","<<nowu<<")\n";
			if(nowu < rd || nowd > ru) {
				ans = false;
				cout<<"NO\n";
				break;
			}
			else{
				d = max(nowd,rd);
				u = min(nowu,ru);
			}
		}
		if(ans){
			int nowd = d - k + 1;
			int nowu = u + k - 1;
			if(nowd <= h[n-1] && nowu >= h[n-1]) cout<<"YES\n";
			else cout<<"NO\n";
		}
	}	
	return 0;
} 
