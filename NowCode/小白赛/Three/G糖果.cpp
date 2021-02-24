#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MaxSize = 1e6 + 10;
int fa[MaxSize];
ll M[MaxSize];

int find(int x){
	if(fa[x] == x) return x;
	else return fa[x] = find(fa[x]);
}

void Merge(int x,int y){
	int fx = find(x);
	M[fx] = max(M[fx],M[x]);
	int fy = find(y);
	M[fy] = max(M[fy],M[y]);
	if(fx != fy) {
		fa[fx] = fy;
		M[fy] = max(M[fy],M[fx]);
	} 
}

int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i = 1;i <= n;i++) fa[i] = i;
	for(int i = 1;i <= n;i++) scanf("%lld",&M[i]);
	for(int i = 0;i < m;i++){
		int a,b;
		scanf("%d%d",&a,&b);
		Merge(a,b);
	}
	ll ans = 0;
	for(int i = 1;i <= n;i++){
		ans += M[find(i)];
//		cout<<find(i)<<" "<<M[find(i)]<<endl;
	}
	printf("%lld",ans);
}

/*
6 4
2 1 5 7 3 1
1 2
4 5
2 4
3 6
*/

