#include <bits/stdc++.h>
using namespace std;
const int MaxSize = 1e6 + 5;
typedef long long ll;
ll num[MaxSize];
int du[MaxSize];
int mdu[MaxSize];

int n,k;

int main()
{
	scanf("%d%d",&n,&k);
	for(int i = 1;i <= n;i++) scanf("%lld",&num[i]);
	//min
	int ml = 0;int mr = 0;
	mdu[0] = 1;
	if(k == 1) printf("%lld ",num[mdu[ml]]);
	for(int i = 2;i <= n;i++){
		mdu[++mr] = i;
		if(i - mdu[ml] >= k) ml ++ ;
		while(ml < mr && num[mdu[mr]] <= num[mdu[mr-1]]) {
			mdu[mr-1] = mdu[mr];
			mr--;
		}
		if(i >= k) printf("%lld ",num[mdu[ml]]);
	}
	printf("\n");
	
	//Max
	int l = 0;int r = 0;
	du[0] = 1;
	if(k == 1) printf("%lld ",num[du[l]]);
	for(int i = 2;i <= n;i++){
		du[++r] = i;
		if(i - du[l] >= k) l ++ ;
		while(l < r && num[du[r]] >= num[du[r-1]]) {
//			cout<<"in "<<num[du[r]]<<" "<<num[du[r-1]]<<" "<<r<<endl;
			du[r-1] = du[r];
			r--;
		}
//		for(int j = l;j <= r;j++) cout<<num[du[j]]<<" ";
//		cout<<endl;
		if(i >= k) printf("%lld ",num[du[l]]);
	}
	
}
