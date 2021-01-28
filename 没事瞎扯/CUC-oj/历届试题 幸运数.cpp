#include <bits/stdc++.h>
using namespace std;
const int MaxSize = 1e6 + 5;

int m,n;
int num[MaxSize];

void solve(int pos){
	int now = pos;
	if(num[pos] >= n) return;
	for(int i = now + 1;i < n;i++){
		if(i % num[pos] != 0){
			num[++now] = num[i];
		}
	}
	solve(pos + 1);
}

int main()
{
	scanf("%d%d",&m,&n);
	int ans = 0;
	for(int i = 1;i < MaxSize;i++) num[i] = 2 * i - 1;
	solve(2);
	for(int i = 1;num[i] < n;i++){
		if(num[i] > m) ans ++ ;
	}
	printf("%d",ans);
} 
