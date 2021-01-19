#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int num[n];
	for(int i = 0;i < n;i++) scanf("%d",&num[i]);
	sort(num,num + n);
	for(int i = 0;i < n-1;i++){
		for(int j = n-1;j > i;j--){
			if(num[i] + num[j] == m){
				printf("%d %d",num[i],num[j]);
				return 0;
			}
			else if(num[i] + num[j] < m){
				break;
			}
		}
	}
	printf("No Solution");
} 
