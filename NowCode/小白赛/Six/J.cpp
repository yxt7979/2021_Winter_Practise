#include <bits/stdc++.h>
#define int long long
using namespace std;
typedef long long ll;

const int MaxSize = 5005;

struct node{
	int to;
	ll w;
	bool operator<(const node& b) const {
		return this->w < b.w;
	}
};
vector<node> G[MaxSize];
int n,m;
int cnt = 0;
int visited[MaxSize];

void bfs(int a){
	multiset<node> st;
	st.insert(node{a,0});
	ll ans = 0;
	while(!st.empty()){
		auto it = *st.begin();
		st.erase(st.begin());
		if(visited[it.to]) continue;
		visited[it.to] ++ ;
		ans += it.w;
		for(auto i : G[it.to]){
			st.insert(i);
		}
	}
	for(int i = 1;i <= n;i++){
		if(!visited[i]) {
			printf("No!\n");
			return;
		}
	}
	printf("%lld\n",ans);
}

signed main()
{
	while(cin>>n>>m){
		cnt = 0;
		memset(visited,0,sizeof(visited));
		map<string,int> M;
		for(int i = 0;i <= MaxSize - 1;i++) G[i].clear();
		string start;
		cin>>start;
		for(int i = 0;i < m;i++){
			string s,e;
			ll wei;
			cin>>s>>e;
			cin>>wei;
			if(M[s] == 0) M[s] = ++cnt;
			if(M[e] == 0) M[e] = ++cnt;
			G[M[s]].emplace_back(node{M[e],wei});
			G[M[e]].emplace_back(node{M[s],wei});
		}
		bfs(M[start]);
	}
}
