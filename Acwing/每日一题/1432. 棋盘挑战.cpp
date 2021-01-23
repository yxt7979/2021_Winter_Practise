#include <bits/stdc++.h>
using namespace std;
const int MaxSize = 40;
int YS[MaxSize] = {0};
int YX[MaxSize] = {0};
int lie[MaxSize] = {0};
int ans[MaxSize];
int n;
int Ans = 0;
int outnum = 3;
void dfs(int h){
	if(h > n){
		Ans ++ ;
		if(outnum != 0){
			for(int i = 1;i <= n;i++) cout<<ans[i]<<" ";
			cout<<endl;
			outnum -- ;
		}
		return;
	}
	for(int i = 1;i <= n;i++){
		if(lie[i] != 1 && YS[h+i] != 1 && YX[h+n-i-1] != 1){
			ans[h] = i;
		//	cout<<"("<<h<<","<<i<<")\n"<<endl;
			lie[i] = 1;YS[h+i] = 1;YX[h+n-i-1] = 1;
			dfs(h+1);
			lie[i] = 0;YS[h+i] = 0;YX[h+n-i-1] = 0;
		}
	}
}

int main(){
	cin>>n;
	dfs(1);
	cout<<Ans;
	return 0;
}
