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
		printf("%d\n",(n - 1 - (k - 1)/2));
		for(int i = (k + 1)/2;i <= n;i++){
			if(i != k) printf("%d ",i);
		}
		printf("\n");
	}	
	return 0;
} 
