#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n,m;
		scanf("%d%d",&n,&m);
		char M[n+1][n+1];
		for(int i = 1;i <= n;i++){
			for(int j = 1;j <= n;j++) cin>>M[i][j];
		}
		if(m % 2 == 1){
			printf("YES\n");
			for(int i = 0;i <= m;i++) {
				if(i % 2 == 0) printf("1 ");
				else printf("2 ");
			}
			printf("\n");
			continue;
		}
		if(n == 2){
			if(M[1][2] == M[2][1]) {
				printf("YES\n");
				for(int i = 0;i <= m;i++) {
					printf("%d ",i % 2 + 1);
				}
				printf("\n");
			}
			else printf("NO\n");
			continue;
		}
		if(M[1][2] == M[2][3]){
			printf("YES\n");
			int start = (2 - m/2 + 300000) % 3;
			for(int i = 0;i <= m;i++){
				if(start == 0) printf("3 ");
				else printf("%d ",start);
				start = (start + 1) % 3;
			}
			printf("\n");
		}
		else if(M[2][3] == M[3][1]){
			printf("YES\n");
			int start = (3 - m/2 + 300000) % 3;
			for(int i = 0;i <= m;i++){
				if(start == 0) printf("3 ");
				else printf("%d ",start);
				start = (start + 1) % 3;
			}
			printf("\n");
		}
		else{
			printf("YES\n");
			int start = (1 - m/2 + 300000) % 3;
			for(int i = 0;i <= m;i++){
				if(start == 0) printf("3 ");
				else printf("%d ",start);
				start = (start + 1) % 3;
			}
			printf("\n");
		}
	}
	return 0;
}
