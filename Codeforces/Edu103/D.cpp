#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int> ll(n),lr(n);
        ll[0]=1;
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1])ll[i]=1;
            else ll[i]=ll[i-1]+1;
        }
        lr[n-1]=1;
        for(int i=n-2;i>=0;i--){
            if(s[i]==s[i+1])lr[i]=1;
            else lr[i]=lr[i+1]+1;
        }
        for(int i=0;i<=n;i++){
            int ans=1;
            if(i)ans+=s[i-1]=='L'?ll[i-1]:0;
            if(i!=n)ans+=s[i]=='R'?lr[i]:0;
            cout<<ans<<' ';
        }
        cout<<'\n';
    }
    return 0;
}
