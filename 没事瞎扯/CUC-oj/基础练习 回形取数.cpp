#include <bits/stdc++.h>
using namespace std;
const int MaxSize = 210; 
int M[MaxSize][MaxSize];
int m,n;

void solve(int up,int down,int left,int right){
//	cout<<endl<<"aaaa"<<up<<" "<<down<<" "<<left<<" "<<right<<endl;
	if(up > down || left > right) return;
	for(int i = up;i <= down;i++){
		printf("%d ",M[i][left]);
	}
	for(int i = left + 1;i <= right;i++){
		printf("%d ",M[down][i]);
	}
	if(left == right) return;
	for(int i = down - 1;i >= up;i--){
		printf("%d ",M[i][right]);
	}
	if(up == down) return;
	for(int i = right - 1;i > left;i--){
		printf("%d ",M[up][i]);
	}
	solve(up+1,down-1,left+1,right-1);
}

int main()
{
	scanf("%d%d",&m,&n);
	for(int i = 1;i <= m;i++){
		for(int j = 1;j <= n;j++){
			scanf("%d",&M[i][j]);
		} 
	} 
	solve(1,m,1,n);
}
