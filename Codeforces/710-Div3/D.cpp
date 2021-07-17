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
		ll nums[n];
		for(int i = 0;i < n;i++) scanf("%lld",&nums[i]);
		sort(nums,nums + n);
		priority_queue<int,vector<int>,less<int> > Que;
		int cnt = 1;
		for(int i = 1;i < n;i++){
			if(nums[i] == nums[i-1]){
				cnt ++ ;
			}
			else{
				Que.push(cnt);
				cnt = 1;
			}
		}
		Que.push(cnt);
//		cout<<"adsf";
		bool end = false;
		while(Que.size() != 0){
			int t1 = Que.top();
			Que.pop();
//			cout<<Que.size();
			if(Que.size() == 0) {
				printf("%d\n",t1);
				end = true;
				break;
			}
			int t2 = Que.top();
			Que.pop();
			t1 -= 1;
			t2 -= 1;
			if(t1) Que.push(t1);
			if(t2) Que.push(t2);
		}
		if(!end) printf("0\n");
	}
}
