#include <bits/stdc++.h>
using namespace std;
const int MaxSize = 1e6 + 5;
int num[MaxSize];
int n;
bool check(int mid){
	bool visited[MaxSize];
	memset(visited,false,sizeof(visited));
	int tm = n/2;
	while(tm){
		bool find = false;
		for(int i = 0;i < n-1;i++){
			for(int j = i+1;j < n;j++){
				if(num[i] + num[j] == mid && !visited[i] && !visited[j]){
					visited[i] = visited[j] = true;
					mid = visited[j];
					find = true;
					break;
				}
			}
			if(find) break;
		}
		if(!find) return false;
		tm -- ;
	}
	return true;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		n *= 2;
		for(int i = 0;i < n;i++){
			scanf("%d",&num[i]); 
		}
		sort(num,num + n);
		stack<pair<int,int>> Stk;
		int l = num[0] + num[1];
		int r = num[n-1] + num[n-2];
		int ans  = 0;
		while(l <= r){
			int mid = l + (r - l) / 2;
			if(check(mid)){
				ans = mid;
				break;
			}
			else l = mid - 1;
		}
		printf("%d\n",ans);
	}
}
