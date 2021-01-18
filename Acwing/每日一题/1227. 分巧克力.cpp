#include <bits/stdc++.h>
using namespace std;
const int MaxSize = 1e5+10;
int n,k;
int a[MaxSize],b[MaxSize];

bool check(int m){
	int cnt = 0;
	for(int i = 0;i < n;i++){
		cnt += (a[i] / m) * (b[i] / m);
	}
	if(cnt >= k) return true;
	else return false;
}

int main()
{
	scanf("%d%d",&n,&k);
	for(int i = 0;i < n;i++){
		scanf("%d%d",&a[i],&b[i]);
	}
	int l = 1,r = 1e5;
	int ans = 0;
	while(l <= r){
		int mid = l + (r - l) / 2;
		if(check(mid)) {
			ans = mid;
			l = mid + 1;
		}
		else{
			r = mid - 1;
		}
	}
	printf("%d",ans);
	return 0;
}
