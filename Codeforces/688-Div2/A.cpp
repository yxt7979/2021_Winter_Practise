#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n,m;
		scanf("%d%d",&n,&m);
		int num[110] = {0};
		for(int i = 0;i < n;i++){
			int x;
			scanf("%d",&x);
			num[x] = 1;
		}
		int ans = 0;
		for(int i = 0;i < m;i++){
			int x;scanf("%d",&x);
			if(num[x] == 1){
				ans ++ ;
			}
		}
		printf("%d\n",ans);
	}
}
