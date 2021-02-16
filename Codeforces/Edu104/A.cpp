#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int num[105];

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		memset(num,0,sizeof(num));
		int n;
		scanf("%d",&n);
		int M = 10000;
		for(int i = 0;i < n;i++){
			int x;
			scanf("%d",&x);
			num[x] ++ ;
			M = min(M,x);
		}
		printf("%d\n",n - num[M]);
	}
	return 0;	
} 
