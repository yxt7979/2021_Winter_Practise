#include <bits/stdc++.h>
using namespace std;

int a;

void solve(int &a){
	if(a < 10) return;
	int tmp = 0;
	while(a){
		tmp += a % 10;
		a /= 10;
	}
	a = tmp;
	solve(a);
}

int main()
{
	scanf("%d",&a);
	solve(a);
	printf("%d",a);
}
