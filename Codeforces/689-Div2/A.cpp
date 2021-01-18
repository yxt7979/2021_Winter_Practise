#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int l,k;
		scanf("%d%d",&l,&k);
		for(int i = 0;i < l;i++){
			printf("%c",'a' + (i % 3)) ;
		}
		printf("\n");
	}
	return 0;
}

