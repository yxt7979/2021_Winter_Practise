#include <bits/stdc++.h>
using namespace std;
const int MaxSize = 1e6 + 10;
int num[MaxSize];

int main()
{
	int n;
	scanf("%d",&n);
	int ans = 0;
	memset(num,-1,sizeof(num)); 
	int la = MaxSize-1;
	for(int i = 1;i <= n;i++){
		int x;
		scanf("%d",&x);
		if(x == la){
			num[x] ++ ;
			ans = max(ans,num[x]);
		}
		else{
			num[x] = max(num[la],num[x] + 1);
			ans = max(ans,num[x]);
		}
		la = x;
	}	
	printf("%d",ans);
}
