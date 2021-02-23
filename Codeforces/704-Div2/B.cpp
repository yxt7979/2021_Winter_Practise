#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		ll num[n];
		bool visited[n+1];
		memset(visited,false,sizeof(visited));
		ll now = n;
		for(int i = 0;i < n;i++) scanf("%lld",&num[i]);
		int pos = n-1;
		int start = n-1;
		while(start >= 0){
			while(num[start] != now){
				start -- ;
			}
			for(int j = start;j <= pos;j++) {
				printf("%lld ",num[j]);
				visited[num[j]] = true;
			}
			pos = start - 1;
			if(pos == -1) break;
			while(visited[now] == true) now -- ;
		}
		printf("\n");
	}
	return 0;
}
