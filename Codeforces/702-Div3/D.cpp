#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int num[110];
int pos[110];

void solve(int left,int right,int high){
	if(left == right){
		pos[num[left]] = high;
		return;
	}
	int mid = left;
	for(int i = left + 1;i <= right;i++){
		if(num[i] > num[mid]) mid = i;
	}
	pos[num[mid]] = high;
	if(mid != left) solve(left,mid - 1,high + 1);
	if(mid != right) solve(mid + 1,right,high + 1);
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		for(int i = 0;i < n;i++) scanf("%d",&num[i]);
		memset(pos,0,sizeof(pos));
		solve(0,n-1,0);
		for(int i = 0;i < n;i++){
			printf("%d ",pos[num[i]]);
		}
		printf("\n");
	}
	return 0;
}
