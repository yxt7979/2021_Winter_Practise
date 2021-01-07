#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MaxSize = 100010;
int F[MaxSize];

int find(int x){
    return F[x] == x ? x : F[x] = find(F[x]);
}

int main()
{
    int N;
    scanf("%d",&N);
    while(N--){
        int n,m;
        scanf("%d%d",&n,&m);
        ll ans = 0;
        for(int i = 1;i <= n;i++) F[i] = i;
        for(int i = 0;i < m;i++){
            int x,y;
            scanf("%d%d",&x,&y);
            if (x == y) continue;
            ans ++ ;
            int u = find(x);
            int v = find(y);
            if(u == v) ans ++ ;
            F[x] = y;
        }
        printf("%d\n",ans);
    }
}
