#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct Node{
	int v,s;
};
bool cmp(Node a,Node b){
	return a.s > b.s;
}
int main()
{
	int t;
	scanf("%d",&t);
	Node N[t];
	for(int i = 0;i < t;i++){
		scanf("%d%d",&N[i].v,&N[i].s);
	}
	sort(N,N + t,cmp);
	priority_queue<int,vector<int>,greater<int>> Que;
	ll ans = 0;
	ll now = 0;
	int sum = 0;
	for(int i = 0;i < t;i++){
		now += N[i].v;
		Que.push(N[i].v);
		sum ++ ;
		while(sum > N[i].s){
			now -= Que.top();
			sum -- ;
			Que.pop();
		}
		ans = max(ans,now);
	}
	printf("%lld",ans);
}
