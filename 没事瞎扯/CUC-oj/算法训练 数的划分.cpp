#include <bits/stdc++.h>
using namespace std;
const int MaxSize = 10;
int n,k;
int num[MaxSize];
int ans = 0;

void dfs(int pos,int sum){
	if(pos == k - 1){
		num[k-1] = n - sum;
		if(num[k-1] >= num[k-2]) {
//			for(int i = 0;i < k;i++) cout<<num[i]<<" ";
//			cout<<endl;
			ans ++ ;
		}
		return;
	}
	int start = pos == 0 ? 1 : num[pos - 1];
	for(int i = start;i <= (n - sum) / (k - pos);i++){
		num[pos] = i;
		dfs(pos + 1,sum + i);
	}
}

int main()
{
	scanf("%d%d",&n,&k);
	dfs(0,0);
	cout<<ans;
}
