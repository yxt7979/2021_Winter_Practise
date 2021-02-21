#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M_m = 3005;

struct H{
	int up,down,left,right;
}hua[M_m];
int d[2005][2005];

int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int now = 0;
	for(int i = 0;i < m;i++){
		int x,y,k;
		scanf("%d%d%d",&x,&y,&k);
		int u = x,l = y,r = y + k - 1,d = x + k - 1;
		int t = now;
		for(int j = t;j >= 0;j--){
			if(hua[i].up >= u && hua[i].down <= d && hua[i].left >= l && hua[i].right <= r){
				hua[i].up = u;hua[i].down = d;hua[i].left = l;hua[i].right = r;
				now = i;
			}
			else{
				hua[i+1].up = u;hua[i+1].down = d;hua[i+1].left = l;hua[i+1].right = r;
				now = i+1;
			}
		}
	}
	for(int i = 0;i <= now;i++){
		int cnt = 1;
		int num = 1;
		for(int j = hua[i].up;j <= hua[i].down;j++){
			if(cnt % 2 == 1){
				for(int k = hua[i].left;k <= hua[i].right;k++){
					d[j][k] = num++;
				}
			}
			else{
				for(int k = hua[i].right;k >= hua[i].left;k--){
					d[j][k] = num++;
				}
			}
			cnt ++ ;
		}
	}
	for(int i = 1;i <= n;i++){
		printf("%d",d[i][1]);
		for(int j = 2;j <= n;j++){
			printf(" %d",d[i][j]);
		}
		printf("\n");
	}
	return 0;
}

/*
3 5
1 1 3
2 2 1
2 2 2
1 1 3
2 2 2
*/
