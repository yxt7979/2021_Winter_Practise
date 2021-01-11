#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	int num[n];
	int all = 0;
	for(int i = 0;i < n;i++){
		scanf("%d",&num[i]);
		all += num[i];
	}
	int right = -1;
	int sum = 0;
	int ans = 0;
	for(int i = 0;i < n;i++){
		while(sum < all / 2){
			right = (right + 1) % n;
			sum += num[right];
			ans = max(min(sum,all - sum),ans);
		}
		ans = max(min(sum,all - sum),ans);
		sum -= num[i];
	}
	printf("%d",ans);
}
