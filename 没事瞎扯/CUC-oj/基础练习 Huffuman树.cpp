#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	priority_queue<int,vector<int>,greater<int>> Que;
	for(int i = 0;i < n;i++){
		int x;
		scanf("%d",&x);
		Que.push(x);
	}
	int ans = 0;
	while(Que.size() != 1){
		int a = Que.top();
		Que.pop();
		int b = Que.top();
		Que.pop();
		Que.push(a+b);
		ans += a+b;
//		cout<<a+b<<" "<<ans<<endl; 
	}
	printf("%d",ans);
}
