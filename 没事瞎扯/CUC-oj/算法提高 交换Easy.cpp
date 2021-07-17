#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int num[n];
	for(int i = 0;i < n;i++) scanf("%d",&num[i]);
	for(int i = 0;i < m;i++){
		int a,b;
		scanf("%d%d",&a,&b);
		a -= 1;b -= 1;
		int sum = num[a] + num[b];
		num[a] = sum - num[a];
		num[b] = sum - num[b];
	}
	for(int i = 0;i < n;i++) cout<<num[i]<<endl;
}
