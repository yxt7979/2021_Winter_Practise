#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int num[n];
	for(int i = 0;i < n;i++) scanf("%d",&num[i]);
	if(n == m) {
		printf("0");
		return 0;
	}
	sort(num,num+n);
	priority_queue<int,vector<int>,greater<int> > Que;
	for(int i = 0;i < m;i++){
		Que.push(num[i]);
	}
	ll ans = 0;
	int time = 1;
	int po = m;
	while(1){
		int tmp = Que.top();
		while(tmp == time){
			Que.pop();
			Que.push(num[po] + tmp);
//			cout<<"in"<<num[po]<<"add"<<tmp<<"s\n";
			po ++ ;
			ans += tmp;
			tmp = Que.top();
			if(po == n) break;
		}
		if(po == n) break;
		time ++ ;
	}
	printf("%lld",ans);
}

/*
5 3
1 1 1 1 1
*/
