#include <bits/stdc++.h>
using namespace std;

int main()
{
	for(int i = 1000;i <= 9999;i++){
		int f = i;
		string fs = to_string(f);
		string sf;
		sf.assign(fs.rbegin(),fs.rend());
		if(fs == sf) cout<<fs<<endl;
	}
}
