#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll n;
	scanf("%lld",&n);
	if(n < 99999){
		cout<<"(";
		for(int i = 0;i < n;i++) cout<<")";
	}
	else{
		vector<pair<int,int>> M;
		ll tmp = n;
		for(int i = 50000;i >= 1;i--){
			if(tmp >= i){
				int num = tmp / i;
				int jian = min(num,20000);
				M.push_back(pair<int,int>(i,jian));
				tmp -= jian * i;
			}
			if(tmp == 0) break;
		}
		int last = 0;
		for(int i = M.size() - 1;i >= 0;i--){
			for(int j = 0;j < M[i].first - last;j++){
				cout<<"(";
			}
			for(int j = 0;j < M[i].second;j++){
				cout<<")";
			}
			last = M[i].first;
		}
	}
} 
