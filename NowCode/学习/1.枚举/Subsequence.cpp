#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n,s;
		scanf("%d%d",&n,&s);
		int num[n];
		for(int i = 0;i < n;i++) scanf("%d",&num[i]);
		int i = 0;
		int j = 0;
		int ans = n+1;
		int sum = num[0];
		while(i < n){
			if(sum < s) {
				j ++ ;
				if(j >= n) break;
				sum += num[j];
			}
			else{
				ans = min(ans,j - i + 1); 
				sum -= num[i];
				i ++ ;
			}
		}
		if(ans > n) printf("0\n");
		else printf("%d\n",ans);
	}
}
