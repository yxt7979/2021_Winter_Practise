#include <bits/stdc++.h>
using namespace std;
const int MaxSize = 10010;

struct P{
	int l,r;
};
P p[MaxSize];

bool cmp(P A,P B){
	return A.l == B.l ? A.r > B.r : A.l < B.l;
}

int main()
{
	int n,mm,ans = 0;
	scanf("%d%d",&n,&mm);
	int num[n];
	for(int i = 0;i < n;i++){
		scanf("%d",&num[i]);
	}
	for(int i = 0;i < mm;i++){
		scanf("%d%d",&p[i].l,&p[i].r);
	}
	sort(p,p + mm,cmp);
	int l = 0;
	for(ans = 0;ans < n;ans ++ ){
		int tmp = -1;
		for(int i = 0;i < n;i++){
			int j;
			for(j = l;j < mm;j++) {
				if(num[i] < p[j].l || num[i] > p[j].r) break;
			}
			tmp = max(tmp,j);
		}
		l = tmp;
		if(l == mm) break;
	}
	if(ans == n) printf("-1");
	else printf("%d",ans + 1);
}

