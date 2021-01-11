#include <bits/stdc++.h>
using namespace std;

int day[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

int main()
{
    string a,b;
    cin>>a>>b;
    long long ans = 0;
    for(int i = 1;i <= 12;i++){
        int num = day[i-1];
        for(int j = 1;j <= num;j++){
            string now;
            if(i >= 1 && i <= 9) {
                now += '0';
                now += '0' + i;
            }
            else now += to_string(i);
            if(j >= 1 && j <= 9){
                now += '0';
                now += '0' + j;
            }
            else now += to_string(j);
            string check;
            check.assign(now.rbegin(),now.rend());
            check += now;
//            cout<<check<<" now : "<<now<<" i :"<<i<<" j :"<<j<<endl;
            if(check >= a && check <= b) ans ++ ;
        }
    }
    //多判断一个闰年 92200229
    if(a <= "92200229" && "92200229" <= b) ans ++ ;
    cout<<ans;
}
