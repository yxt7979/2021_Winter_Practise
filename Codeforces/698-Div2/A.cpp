#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int ans = 1;
		int x;scanf("%d",&x);
		int now = 1;
		for(int i = 1;i < n;i++){
			int tmp;
			scanf("%d",&tmp);
			if(tmp == x) {
				now ++ ;
				ans = max(ans,now);
			}
			else{
				ans = max(ans,now);
				now = 1;
				x = tmp;
			}
		}
		printf("%d\n",ans);
	}
}
