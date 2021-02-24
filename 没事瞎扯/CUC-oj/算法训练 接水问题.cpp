#include <bits/stdc++.h>
using namespace std;

priority_queue<int,vector<int>,greater<int>> Que;
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int cnt = 0;
	for(int i = 0;i < n;i++){
		int x;
		scanf("%d",&x);
		if(cnt < m){
			cnt ++ ;
			Que.push(x);
		}
		else{
			int t = Que.top();
			Que.pop();
			t += x;
			Que.push(t);
		}
	}
	while(Que.size() != 1) Que.pop();
	printf("%d",Que.top());
} 
