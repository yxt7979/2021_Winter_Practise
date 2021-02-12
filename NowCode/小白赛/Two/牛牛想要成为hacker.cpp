#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	int f = 1e9;
	for(int i = 0;i < n;i++){
		printf("%d ",f);
		if(f != 1) f /= 2;
	}
}
