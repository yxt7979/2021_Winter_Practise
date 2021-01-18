#include <bits/stdc++.h>
using namespace std;
const int MaxSize = 1e5 + 5;

int a[MaxSize];
int b[MaxSize];

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n,m;
		scanf("%d%d",&n,&m);
		for(int i = 1;i <= n;i++) {
			scanf("%d",&a[i]);
			b[i] = a[i];
		}
		int check = -1;
		sort(b+1,b + n+1);
		for(int i = n;i >= 1;i--){
			if(a[i] != b[i]){
				check = i;
				break;
			}
		}
		if(check == -1) {
			for(int i = 0;i < m;i++){
				int place;
				double p;
				scanf("%d%lf",&place,&p);
			}
			printf("1.000000\n");
		}
		else{
			double ans = 1;
			for(int i = 0;i < m;i++){
				int place;
				double p;
				scanf("%d%lf",&place,&p);
				if(place >= check){
					ans *= 1 - p;
				}
			}
			printf("%lf\n",1 - ans);
		}
	}
}
