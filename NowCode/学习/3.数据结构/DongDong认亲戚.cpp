#include <bits/stdc++.h>
using namespace std;
const int MaxSize = 20010;
int p[MaxSize];
map<string,int> Mp;

int find(int x){
	if(p[x] != x) p[x] = find(p[x]);
	return p[x];
}

int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i = 1;i <= n;i++){
		string s;
		cin>>s;
		p[i] = i;
		Mp[s] = i;
	}
	for(int i = 0;i < m;i++){
		int op;
		string a,b;
		cin>>op>>a>>b;
		if(op == 1){
			p[find(Mp[a])] = find(Mp[b]);
		}
		else{
			if(find(Mp[a]) == find(Mp[b])) cout<<1<<endl;
			else cout<<0<<endl;
		}
	}
}
