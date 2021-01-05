#include <bits/stdc++.h>
using namespace std;

int countPairs (vector<int> d){
    int ans = 0,mod = 1e9 + 7;
    unordered_map<int,int> hash;
    for(auto x : d){
        for(int i = 0;i < 22;i++){
            int t = (1 << i) - x;
            if(hash.count(t)){
                ans =(ans + hash[t]) % mod;
            }
        }
    	hash[x] ++ ;
    }
    return ans % mod;
}

int main()
{
	int n;
	cin>>n;
	vector<int> V;
	for(int i = 0;i < n;i++) {
		int x;
		cin>>x;
		V.push_back(x);
	}
	int ans = countPairs(V);
	cout<<ans;
	return 0;
}
