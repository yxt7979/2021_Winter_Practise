#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int n;
	scanf("%d",&n);
	ll M[n+1][n+1];
	M[1][1] = 1;
	cout<<1<<endl;
	for(int i = 2;i <= n;i++){
		M[i][1] = M[i-1][1];
		M[i][i] = M[i-1][i-1];
		for(int j = 2;j <= i-1;j++){
			M[i][j] = M[i-1][j-1] + M[i-1][j];
		}
		for(int j = 1;j < i;j++) cout<<M[i][j]<<" ";
		cout<<M[i][i];
		if(i != n) cout<<endl;
	}
}
