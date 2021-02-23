#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MaxSize = 2e5 + 100;

int main()
{
	int m,n;
	scanf("%d%d",&n,&m);
	string a,b;
	cin>>a>>b;
	vector<int> V;
	int ind = 0;
	for(int i = 0;i < m;i++){
		while(b[i] != a[ind]) ind ++ ;
		V.push_back(ind);
		ind ++ ;
	}
	int ans = 0;
	for(int i = 0;i < m-1;i++){
		ans = max(ans,V[i+1] - V[i]);
	}
	ind = n-1;
	for(int i = m-1;i >= 1;i--){
		while(b[i] != a[ind]) ind -- ;
		ans = max(ans,ind - V[i-1]);
		ind -- ;
	}
	printf("%d",ans);
	return 0;
}
