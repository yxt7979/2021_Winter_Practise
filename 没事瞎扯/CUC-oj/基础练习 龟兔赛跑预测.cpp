#include <bits/stdc++.h>
using namespace std;

int main()
{
	int v1,v2,t,s,l;
	scanf("%d%d%d%d%d",&v1,&v2,&t,&s,&l);
	int lr = 0,lt = 0;
	int stop = 0;
	int cnt = 0;
	while(lr < l && lt < l){
		cnt ++ ;
		if(lr - lt < t && stop == 0){
			lr += v1;
			lt += v2;
		}
		else if(lr - lt >= t && stop == 0){
			lt += v2;
			stop = s-1;
		}
		else{
			lt += v2;
			stop --;
		}
	}
	if(lr == l && lt == l){
		printf("D\n%d",cnt);
	}
	else if(lr == l) printf("R\n%d",cnt);
	else printf("T\n%d",cnt);
}
