#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		string s;
		cin>>s;
		vector<int> V;
		V.push_back(1); 
		for(int i = 1;i < n;i++){
			if(s[i] - '0' + 1 != V[V.size() - 1] + s[i-1] - '0') V.push_back(1);
			else V.push_back(0);
		}
		for(int i = 0;i < V.size();i++){
			printf("%d",V[i]);
		}
		printf("\n");
	}
} 
