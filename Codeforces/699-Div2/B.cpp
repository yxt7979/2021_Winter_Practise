#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n,k;
		scanf("%d%d",&n,&k);
		int num[n];
		for(int i = 0;i < n;i++) scanf("%d",&num[i]);
		if(k > 10000){
			printf("-1\n");
			continue;
		}
		bool ok = false;
		for(int i = 0;i < k;i++){
			int j;
			for(j = 0;j < n-1;j++){
				if(num[j] < num[j+1]) {
					num[j] ++ ;
					if(i == k-1) {
						printf("%d\n",j+1);
						ok = true;
					}
					break;
				}
			}
			if(j == n-1 && !ok) {
				printf("-1\n");
				break;
			}
		}
	}
	return 0;
}
