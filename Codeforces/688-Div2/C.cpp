#include <bits/stdc++.h>
using namespace std;
struct Node{
	int cnt;
	int up;
	int down;
	int left;
	int right;
};
int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int num[n+1][n+1];
		Node N[10];
		for(int i = 0;i < 10;i++){
			N[i].cnt = N[i].down = N[i].left = N[i].right = N[i].up = 0;
		}
		for(int i = 1;i <= n;i++){
			for(int j = 1;j <= n;j++){
				scanf("%1d",&num[i][j]);
				N[num[i][j]].cnt ++ ;
				if(N[num[i][j]].left == 0) N[num[i][j]].left = j;
				else N[num[i][j]].left = min(N[num[i][j]].left,j);
				if(N[num[i][j]].right == 0) N[num[i][j]].right = j;
				else N[num[i][j]].right = max(N[num[i][j]].right,j);
				if(N[num[i][j]].up == 0) N[num[i][j]].up = i;
				else N[num[i][j]].up = min(N[num[i][j]].up,i);
				if(N[num[i][j]].down == 0) N[num[i][j]].down = i;
				else N[num[i][j]].down = max(N[num[i][j]].down,i);
			}
		}
		for(int i = 0;i <= 9;i++){
			if(N[i].cnt < 2) printf("0 ");
			else{
				int ans = 0;
				for(int j = 1;j <= n;j++){
					int m = 1e9;int M = 0;
					for(int k = 1;k <= n;k++){
						if(num[j][k] == i){
							m = min(m,k);
							M = max(M,k);
							ans = max(ans,(j - N[i].up) * max(n-k,k-1));
							ans = max(ans,(N[i].down - j) * max(n-k,k-1));
//							cout<<j<<" "<<k<<" "<<N[i].down<<" "<<max(n-k,k-1)<<" "<<num[j][k]<<"asdfasdf"<<ans<<endl;
							ans = max(ans,(N[i].right - k) * max(j-1,n-j));
							ans = max(ans,(k - N[i].left) * max(j-1,n-j));
						}
					}
					if(M == 0 || m == 1e9 ) continue;
					ans = max(ans,(M - m) * max(j-1,n-j));
				}
				for(int j = 1;j <= n;j++){
					int m = 1e9;int M = 0;
					for(int k = 1;k <= n;k++){
						if(num[k][j] == i){
							m = min(m,k);
							M = max(M,k);
						}
					}
					if(M == 0 || m == 1e9 ) continue;
					ans = max(ans,(M - m) * max(j-1,n-j));
				}
				printf("%d ",ans);
			}
		}
		printf("\n");
	}
}
