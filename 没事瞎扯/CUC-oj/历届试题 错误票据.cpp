#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	vector<int> V;
	int x;
	while(cin>>x){
		V.push_back(x);
	}
	sort(V.begin(),V.end());
	int le;
	int dou;
	for(int i = 1;i < V.size();i++){
		if(V[i] - V[i-1] != 1 && V[i] != V[i-1]) le = V[i-1] + 1;
		if(V[i] == V[i-1]) dou = V[i-1]; 
	}
	printf("%d %d",le,dou);
}
