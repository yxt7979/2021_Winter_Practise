#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int n,k;
	while(cin>>n>>k){
		vector<int> V;
		bool have = false;
		for(int i = 0;i < n;i++){
			int x;scanf("%d",&x);
			if(x == k && !have) {
				have = true;
			} 
			else V.push_back(x);
		}
		for(int i = 1;i < V.size();i++){
			V[i] = (V[i] + V[i-1]) % 11;
		}
		printf("%d\n",V[V.size() - 1]);
	}
	return 0;	
} 
