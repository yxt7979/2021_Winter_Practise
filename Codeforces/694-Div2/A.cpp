#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin>>n;
    while (n--){
        int num,x;
        cin>>num>>x;
        ll sum = 0;
        ll M = 0;
        for(int i = 0;i < num;i++){
            ll tmp;
            cin>>tmp;
            sum += tmp;
            M += tmp%x==0 ? tmp/x : tmp/x + 1;
        }
        cout<<(sum%x==0 ? sum/x : sum/x + 1)<<" "<<M<<endl;
    }
}
