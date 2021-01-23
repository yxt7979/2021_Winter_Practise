#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	int num[n];
	for(int i = 1;i <= n;i++){
		scanf("%d",&num[i]);
	}
	int check;scanf("%d",&check);
	for(int i = 1;i <= n;i++){
		if(num[i] == check){
			printf("%d",i);
			return 0;
		}
	}
	printf("-1");
}
