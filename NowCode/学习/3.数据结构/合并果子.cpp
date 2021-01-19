#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	priority_queue<int,vector<int>,greater<int> > Que;
	int ans = 0;
	for(int i = 0;i < n;i++){
		int x;scanf("%d",&x);
		Que.push(x);
	}
	while(Que.size() != 1){
		int tmp = 0;
		tmp += Que.top();
		Que.pop();
		tmp += Que.top();
		Que.pop();
		Que.push(tmp);
		ans += tmp;
	}
	printf("%d",ans);
	return 0;
}
