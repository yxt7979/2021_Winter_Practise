#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool cmp(ll a,ll b) {return a > b;}

int main()
{
    int n;
    scanf("%d",&n);
    while (n--) {
        int num1,num2;
        scanf("%d%d",&num1,&num2);
        vector<ll> V1;
        vector<ll> V2;
        for(int i = 0;i < num1;i++){
            ll tmp;scanf("%lld",&tmp);
            V1.push_back(tmp);
        }
        for(int i = 0;i < num2;i++){
            ll tmp;scanf("%lld",&tmp);
            V2.push_back(tmp);
        }
        sort(V1.begin(),V1.end(),cmp);
        ll ans = 0;
        int i;
        for(i = 0;i < num1;i++){
            if(i+1 >= V1[i]) break;
            ans += V2[i];
        }
        for(int j = i;j < num1;j++){
            ans += V2[V1[j]-1];
        }
        printf("%lld\n",ans);
    }
}
