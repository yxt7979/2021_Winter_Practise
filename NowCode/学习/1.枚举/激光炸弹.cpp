#include <bits/stdc++.h>
using namespace std;

int M[5050][5050];

int main()
{
	int n,r;
	scanf("%d%d",&n,&r);
	int m = r;
    int M1 = r;
	for(int i = 0;i < n;i++){
		int a,b,v;
		scanf("%d%d%d",&a,&b,&v);
		m = max(m,a+1);
		M1 = max(M1,b+1);
		M[a+1][b+1] = v;
	}
	for(int i = 1;i < m+1;i++){
		for(int j = 1;j < M1+1;j++){
			M[i][j] += M[i-1][j] + M[i][j-1] - M[i-1][j-1]; 
		}
	}
	int ans = 0;
	for(int i = 1;i < m+2 - r;i++){
		for(int j = 1;j < M1+2 - r;j++){
			ans = max(M[i + r - 1][j + r - 1] - M[i + r - 1][j - 1] - M[i - 1][j + r - 1] + M[i - 1][j - 1],ans);
		}
	}
	cout<<ans;
} 
