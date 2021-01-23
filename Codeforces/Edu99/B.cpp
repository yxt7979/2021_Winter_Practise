#include <bits/stdc++.h>
using namespace std;
const int MaxSize = 1e6 + 3;
long long check[MaxSize];

void init(){
	check[0] = 0;
	for(int i = 1;i < MaxSize;i++){
		check[i] = i + check[i-1];
	}
}

void solve(int n){
	int cnt = 0;
	while(check[cnt] < n){
		cnt ++ ;
	}
	if(check[cnt] - n == 1) cout<<cnt + 1<<endl;
	else cout<<cnt<<endl;
}
int main()
{
	int t;
	scanf("%d",&t);
	init();
	while(t--){
		int n;
		scanf("%d",&n);
		solve(n);
	}
	return 0;
}
