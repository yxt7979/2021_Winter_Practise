#include <bits/stdc++.h>
using namespace std;
const int MaxSize = 505;
int n,x;
int num[MaxSize];
int ans;

void solve(vector<int> tmp){
	int cnt = 0;
	sort(tmp.begin(),tmp.end());
	for(int i = 0;i < n;i++){
		if(tmp[i] != num[i]){
			if(tmp[i] > num[i]) return;
			else cnt ++ ;
		}
	}
	ans = min(ans,cnt);
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&n,&x);
		ans = 0x3f3f3f3f;
		bool is_ok = true;
		for(int i = 0;i < n;i++) {
			scanf("%d",&num[i]);
			if(i >= 1 && num[i] < num[i-1])  is_ok = false;
		}
		if(is_ok) {
			printf("0\n");
			continue;
		}
		for(int i = n-1;i >= 0;i--){
			int last = num[i];
			vector<int> tmp;
			for(int j = 0;j < n;j++){
				if(j != i) tmp.push_back(num[j]);
			}
			tmp.push_back(x);
			solve(tmp);
		}
		if(ans != 0x3f3f3f3f) cout<<ans<<endl;
		else cout<<-1<<endl;
	}
}
