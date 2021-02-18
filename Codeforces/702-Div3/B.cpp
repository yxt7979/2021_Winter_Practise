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
		int num[3];
		memset(num,0,sizeof(num));
		for(int i = 0;i < n;i++){
			int x;
			scanf("%d",&x);
			num[x % 3] ++ ;
		}
//		for(int i = 0;i < 3;i++) cout<<num[i]<<" ";
		int need = n / 3;
		int ans = 0;
		for(int i = 0;i < 3;i++){
			if(num[i] > need){
				ans += num[i] - need;
				num[(i+1) % 3] += num[i] - need;
			}
			else{
				ans += need - num[i];
				num[(i + 2) % 3] += num[i] - need;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}
