#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,k;
	scanf("%d%d%d",&a,&b,&k);
	if(k == 0){
		printf("YES\n");
		for(int i = 0;i < b;i++) printf("1");
		for(int i = 0;i < a;i++) printf("0");
		printf("\n");
		for(int i = 0;i < b;i++) printf("1");
		for(int i = 0;i < a;i++) printf("0");
		return 0;
	}
	if(b == 1 || k > a + b - 2 || a == 0){
		printf("NO");
		return 0;
	}
	printf("YES\n");
	for(int i = 0;i < b;i++) printf("1");
	for(int i = 0;i < a;i++) printf("0");
	printf("\n");
	if(k <= a){
		for(int i = 0;i < b-1;i++) printf("1");
		for(int i = 0;i < k;i++) printf("0");
		printf("1");
		for(int i = 0;i < a - k;i++) printf("0");
	}
	else{
		for(int i = 0;i < a + b - k - 1;i++) printf("1");
		printf("0");
		for(int i = 0;i < k - a;i++) printf("1");
		for(int i = 0;i < a-1;i++) printf("0");
		printf("1");
	}
}
