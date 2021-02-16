#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	int num[n];
	for(int i = 0;i < n;i++) scanf("%d",&num[i]);
	do{
		if(k == 0){
			for(int i = 0;i < n;i++) printf("%d ",num[i]);
			return 0;
		}
		k--;
	} while(next_permutation(num,num + n));
}
