#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,b;
	scanf("%d%d",&n,&b);
	vector<int> V;
	for(int i = 0;i < n;i++){
		int x;
		scanf("%d",&x);
		if(x % b != 0) V.push_back(x);
	}
	sort(V.begin(),V.end());
	for(auto i : V){
		if(i >= int('A') && i <= int('Z')) printf("%c ",char(i));
		else printf("%d ",i);
	}
	return 0;
}

/*
7 2
77 11 66 22 44 33 55
*/
