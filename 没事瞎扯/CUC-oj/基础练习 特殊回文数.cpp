#include <bits/stdc++.h>
using namespace std;

int main()
{
	int k;
	cin>>k;
	for(int i = 10000;i <= 999999;i++){
		int f = i;
		string fs = to_string(f);
		int sum = 0;
		for(int j = 0;j < fs.length();j++) sum += (fs[j] - '0');
		string sf;
		sf.assign(fs.rbegin(),fs.rend());
		if(fs == sf && sum == k) cout<<fs<<endl;
	}
}
