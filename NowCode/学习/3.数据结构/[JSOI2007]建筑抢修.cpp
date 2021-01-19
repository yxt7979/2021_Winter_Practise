#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct Node{
	ll sp;
	ll dddl; 
};
bool cmp(Node a,Node b){
	return a.dddl < b.dddl;
}
int main()
{
	int n;
	scanf("%d",&n);
	Node N[n];
	for(int i = 0;i < n;i++){
		scanf("%lld%lld",&N[i].sp,&N[i].dddl);
	}
	sort(N,N + n,cmp);
//	for(int i = 0;i < n;i++) cout<<N[i].sp<<" "<<N[i].dddl<<" adfd "<<endl;
	priority_queue<int> Que;
	ll now = 0;
	ll have = 0;
	for(int i = 0;i < n;i++){
		if(Que.size() == 0){
			now ++ ;
			Que.push(N[i].sp);
			have += N[i].sp;
		}
		else{
			if(have + N[i].sp <= N[i].dddl){
				now ++ ;
				have += N[i].sp;
				Que.push(N[i].sp);
			}
			else{
				if(Que.top() >= N[i].sp){
					have -= Que.top();
					Que.pop();
					have += N[i].sp;
					Que.push(N[i].sp);
				}
			}
		}
//		cout<<i<<" "<<have<<" "<<Que.top()<<endl;
	}
	printf("%lld",now);
}
