#include <bits/stdc++.h>
using namespace std;

string solve(int n){
	if(n == 0) return "0";
	else if(n == 2) return "2";
	else{
		int tmp = n;
		vector<int> V;
		while(tmp != 0){
			int a = 1,cnt = 0;
			while(a*2 <= tmp){
				a *= 2;
				cnt ++ ;
			}
			tmp -= a;
			V.push_back(cnt);
		}
		string ans;
		for(int i = 0;i < V.size();i++){
			if(V[i] != 1){
				ans += "2(";
				ans += solve(V[i]);
				if(i != V.size() - 1) ans += ")+";
				else ans += ")";
			}
			else {
				if(i != V.size() - 1) ans += "2+";
				else ans += "2";
			}
		}
		return ans;
	}
}

int main()
{
	int n;
	scanf("%d",&n);
	cout<<solve(n);
} 
