#include <bits/stdc++.h>
using namespace std;
int n,k;

bool solve(int x){
	if(x % k == 0) return true;
	for(int i = 0;i*10+k <= x;i++){
		if(solve(x - i*10 - k)) return true;
		else solve(x - i*10 - k);
	}
	return false;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&n,&k);
		for(int i = 0;i < n;i++){
			int x;
			scanf("%d",&x);
			if(x >= k * 10) {
				printf("yes\n");
				continue;
			}
			if(solve(x)) printf("yes\n");
			else printf("no\n");
		}
	}
}
