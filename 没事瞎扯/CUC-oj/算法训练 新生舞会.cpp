#include <bits/stdc++.h>
using namespace std;

int turn(string a){
	int mod = 1;
	int ans = 0;
	for(int i = a.length() - 1;i >= 0;i--){
		ans += mod * (a[i] - '0');
		mod *= 10;
	}
	return ans;
}

int main()
{
	int n;
	scanf("%d",&n);
	map<int,char> M1;
	map<string,char> M2;
	string name;
	int hao;
	char c;
	for(int i = 0;i < n;i++){
		cin>>name>>hao>>c;
		M1[hao] = c;
		M2[name] = c;
	}
	int m;
	scanf("%d",&m);
	string a,b;
	for(int i = 0;i < m;i++){
		cin>>a>>b;
		char c1,c2;
		if(a[0] >= '0' && a[0] <= '9'){
			int aa = turn(a);
			c1 = M1[aa];
		}
		else c1 = M2[a];
		if(b[0] >= '0' && b[0] <= '9'){
			int bb = turn(b);
			c2 = M1[bb];
		}
		else c2 = M2[b];
		if(c1 == c2) printf("N\n");
		else printf("Y\n");
	}
	return 0;
}
/*
4
John 10 M
Jack 11 M
Kate 20 F
Jim 21 M
3
John 11
20 Jack
Jim Jack
*/
