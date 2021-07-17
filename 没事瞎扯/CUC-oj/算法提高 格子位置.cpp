#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,a,b;
	scanf("%d%d%d",&n,&a,&b);
	for(int i = 1;i <= n;i++){
		printf("(%d,%d)",a,i);
	}
	printf("\n");
	for(int i = 1;i <= n;i++){
		printf("(%d,%d)",i,b);
	}
	printf("\n");
	for(int i = 1;i <= n;i++){
		int you = i + (b - a) ;
		if(you <= 0) continue;
		if(you > n) break;
		printf("(%d,%d)",i,you);
	}
	printf("\n");
	for(int i = 1;i <= n;i++){
		int zuo = (a + b) - i;
		if(zuo > n) continue;
		if(zuo == 0) break;
		printf("(%d,%d)",zuo,i);
	}
}
