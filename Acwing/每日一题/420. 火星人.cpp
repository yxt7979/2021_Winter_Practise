#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	int k;
	scanf("%d%d",&n,&k);
	int num[n];
	for(int i = 0;i < n;i++) scanf("%d",&num[i]);
	int cnt = k+1;
	do{
		cnt -- ;
		if(cnt == 0) break;
	}while(next_permutation(num,num+n));
	for(int i = 0;i < n;i++) cout<<num[i]<<" "; 
}
