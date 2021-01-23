#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MaxE = 1e5 + 5;
const int MaxN = 1e4 + 5;
struct Edge{
	int st;
	int en;
	int w;
}E[MaxE];
int P[MaxN];
int n,m;
int f[MaxN];

bool cmp(Edge a,Edge b){
	return a.w < b.w;
}

int find(int x){
	return x == f[x] ? x : f[x] = find(f[x]);
}

bool join(int a,int b){
	int fa = find(a);
	int fb = find(b);
	if(fa == fb) return false;
	else {
		f[fa] = fb;
		return true;
	}
}

int main()
{
	scanf("%d%d",&n,&m);
	int minp = 10000;
	for(int i = 1;i <= n;i++) {
		scanf("%d",&P[i]);
		minp = min(minp,P[i]);
	}
	for(int i = 1;i <= m;i++){
		scanf("%d%d%d",&E[i].st,&E[i].en,&E[i].w);
		E[i].w = 2 * E[i].w + P[E[i].en] + P[E[i].st];
	}
	sort(E+1,E + m + 1,cmp);
	//build
	for(int i = 1;i <= n;i++) f[i] = i;
	int nume = 0;
	ll sum = 0;
	for(int i = 1;i <= m;i++){
		if(join(E[i].en,E[i].st)){
			sum += E[i].w;
//			cout<<E[i].en<<" "<<E[i].st<<" "<<E[i].w<<" "<<sum<<endl;
			nume ++ ;
			if(nume == n-1) break;
		}
	}
	printf("%lld",minp + sum);
}
