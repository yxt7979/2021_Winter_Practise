#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int num[n+1];
		set<int> s1,s2;
		for(int i = 1;i <= n;i++){
			scanf("%d",&num[i]);
			s1.insert(i);
			s2.insert(i);
		}
		int ans1[n+1];
		int ans2[n+1];
		memset(ans1,0,sizeof ans1);
		memset(ans2,0,sizeof ans2);
		ans1[1] = num[1];
		ans2[1] = num[1];
		s1.erase(num[1]);
		s2.erase(num[1]);
		for(int i = 2;i <= n;i++){
			if(num[i] != num[i-1]){
				ans1[i] = num[i];
				ans2[i] = num[i];
				s1.erase(num[i]);
				s2.erase(num[i]);
			}
		}
		for(int i = 2;i <= n;i++){
			if(ans1[i] == 0){
				int x = *s1.begin();
				ans1[i] = x;
				s1.erase(x);
				auto pos = s2.upper_bound(ans2[i-1]);
				pos -- ;
				ans2[i] = *(pos);
				s2.erase(ans2[i]);
			}
		}
		for(int i = 1;i <= n;i++){
			printf("%d ",ans1[i]);
		}
		printf("\n");
		for(int i = 1;i <= n;i++){
			printf("%d ",ans2[i]);
		}
		printf("\n");
	}
}
