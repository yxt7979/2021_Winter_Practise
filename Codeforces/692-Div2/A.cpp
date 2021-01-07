#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
        int len;
        cin>>len;
        string s;
        cin>>s;
        int knum = 0;
        for(int i = s.length()-1;i >= 0;i--){
            if(s[i] == ')') knum ++ ;
            else break;
        }
        if(knum > len - knum) cout<<"Yes\n";
        else cout<<"No\n";
    }
}
