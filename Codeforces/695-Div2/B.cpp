#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		ll num[n];
		long long sum = 0;
		for(int i = 0;i < n;i++) scanf("%lld",&num[i]);
		int k = 0;
		for(int i = 1;i < n-1;i++){
			if((num[i] > num[i-1] && num[i] > num[i+1]) || (num[i] < num[i-1] && num[i] < num[i+1])) k ++ ;
		}
		//cout<<"k : "<<k<<endl;
		if(k == 0) {
			cout<<0<<endl;
			continue;
		}
		int ans = n;
		for(int i = 1;i < n-1;i++){
			if((num[i] > num[i-1] && num[i] > num[i+1]) || (num[i] < num[i-1] && num[i] < num[i+1])){
				ll tmp = num[i];
				int tmpans = 0;
				num[i] = num[i-1];
				for(int j = 1;j < n-1;j++){
					if((num[j] > num[j-1] && num[j] > num[j+1]) || (num[j] < num[j-1] && num[j] < num[j+1])) tmpans ++ ;
				}
				ans = min(ans,tmpans);
				num[i] = num[i+1];
				tmpans = 0;
				for(int j = 1;j < n-1;j++){
					if((num[j] > num[j-1] && num[j] > num[j+1]) || (num[j] < num[j-1] && num[j] < num[j+1])) tmpans ++ ;
				}
				ans = min(ans,tmpans);
				num[i] = tmp;
			}
			if(k - ans == 3) break;
		}
		cout<<ans<<endl;
	}
}

/*
3 3 2 1 3 2 1
*/
