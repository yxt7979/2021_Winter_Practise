#include <bits/stdc++.h>
using namespace std;
 
vector<int> decode(vector<int>& encoded, int first) {
    vector<int> ans;
    ans.push_back(first);
    for(int i = 0;i < encoded.size();i++){
        int rlt = ans[ans.size() - 1];
        int a = encoded[i];
        int now = 0;
        long long mod = 1;
        while(rlt || a){
            int check = rlt & 1;
            int last = a & 1;
            if(check) {
                if(last == 1) last = 0;
                else last = 1;
                now += mod * last;
            }
            else now += mod * last;
            rlt >>= 1;
            a >>= 1;
            mod = mod * 2;
        }
        ans.push_back(now);
    }
    return ans;
}
    
int main()
{
	vector<int> V;
	V.push_back(6);
	V.push_back(2);
	V.push_back(7);V.push_back(3);
	vector<int> ans = decode(V,4);
	for(int i = 0;i < ans.size();i++) cout<<ans[i]<<" ";
}
