#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	int numou = 0,numji = 0;
	for(int i = 0;i < n;i++){
		int x;
		scanf("%d",&x);
		if(x % 2 == 0) numou ++ ;
		else numji ++ ;
	}
	for(int i = 1;i < n;i++){
		if(i % 2 != 0){
			//niuniu
			if(numou >= 1) numou -- ;
			else numji -- ;
		}
		else{
			//niumei
			if(numji >= 2) {
				numji -= 2;
				numou ++ ;
			}
			else if(numji == 1) numji -- ;
			else numou -- ;
		}
	}
	if(numou == 1) printf("NiuMei");
	else printf("NiuNiu") ;
}
