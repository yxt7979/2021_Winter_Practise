#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool ok(ll num){
    ll check = num;
    while(num){
        int mod = num % 10;
        num /= 10;
        if(mod == 0) continue;
        if(check % mod != 0) return false;
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    while(n--){
        ll num;
        cin>>num;
        while(true){
            if(ok(num) == true) break;
            else num ++ ;
        }
        cout<<num<<endl;
    }
}
