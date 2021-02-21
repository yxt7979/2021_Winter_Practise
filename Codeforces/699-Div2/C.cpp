#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MaxSize = 1e5 + 10;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n,m;
		scanf("%d%d",&n,&m);
		int a[n];
		for(int i = 0;i < n;i++) scanf("%d",&a[i]);
		map<int,vector<int>> M;
		map<int,vector<int>> M2;
		for(int i = 0;i < n;i++) {
			int x;
			scanf("%d",&x);
			if(x != a[i]){
				M[x].push_back(i+1);
			}
			else M2[x].push_back(i+1);
		}
		int pos[MaxSize];
		memset(pos,0,sizeof(pos));
		int ans[m];
		int last;
		for(int i = 0;i < m;i++){
			int k;scanf("%d",&k);
			if(i == m-1) last = k;
			if(M[k].size() != 0){
				if(pos[k] < M[k].size()) {
					ans[i] = M[k][pos[k]];
					pos[k] ++ ;
				}
				else ans[i] = M[k][M[k].size() - 1];
			}
			else ans[i] = -1;
		}
		bool can = true;
		for(auto i : M){
			if(pos[i.first] != i.second.size()) {
				printf("NO\n");
				can = false;
				break;
			}
		}
		if(!can) continue;
		if(ans[m-1] == -1) {
			if(M2[last].size() != 0) ans[m-1] = M2[last][0];
			else {
				printf("NO\n");
				continue;
			}
		}
		printf("YES\n");
		for(int i = 0;i < m;i++){
			if(ans[i] == -1) printf("%d ",ans[m-1]);
			else printf("%d ",ans[i]);
		}
		printf("\n");
	}
	return 0;
}
