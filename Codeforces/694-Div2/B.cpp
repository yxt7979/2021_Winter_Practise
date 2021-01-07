#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin>>n;
    while (n--) {
        int num, x;
        cin >> num >> x;
        vector<ll> V;
        ll ans = 0;
        int m = 0x3f3f3f3f,tag = 0;
        for(int i = 0;i < num;i++){
            ll tmp;
            cin>>tmp;
            V.push_back(tmp);
            int time = 1;
            while(tmp % x == 0){
                tmp /= x;
                time ++ ;
            }
            if(time < m){
                m = time;
                tag = i;
            }
        }
        int M = m + 1;
        for(int i = 0;i < tag;i++){
            ans += M * V[i];
        }
        for(int i = tag;i < num;i++){
            ans += m * V[i];
        }
        cout<<ans<<endl;
    }
}
