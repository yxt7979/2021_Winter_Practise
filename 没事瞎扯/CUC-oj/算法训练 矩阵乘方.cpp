#include <bits/stdc++.h>
using namespace std;
#define int long long
int mp[3][3];
int m;

void solve(int b){
	if(b == 1) {
		return;
	}
	if(b % 2 == 0){
		solve(b / 2);
		int a = (mp[1][1] * mp[1][1] + mp[1][2] * mp[2][1]) % m;
		int b = (mp[1][1] * mp[1][2] + mp[1][2] * mp[2][2]) % m;
		int c = (mp[2][1] * mp[1][1] + mp[2][2] * mp[2][1]) % m;
		int d = (mp[2][1] * mp[1][2] + mp[2][2] * mp[2][2]) % m;
		mp[1][1] = a;
		mp[1][2] = b;
		mp[2][1] = c;
		mp[2][2] = d;
	}
	else {
		int tt[4] = {mp[1][1],mp[1][2],mp[2][1],mp[2][2]};
		solve(b-1);
		int a = (mp[1][1] * tt[0] + mp[1][2] * tt[2]) % m;
		int b = (mp[1][1] * tt[1] + mp[1][2] * tt[3]) % m;
		int c = (mp[2][1] * tt[0] + mp[2][2] * tt[2]) % m;
		int d = (mp[2][1] * tt[1] + mp[2][2] * tt[3]) % m;
		mp[1][1] = a;
		mp[1][2] = b;
		mp[2][1] = c;
		mp[2][2] = d;
	}
}

signed main()
{
	int b;
	scanf("%lld%lld",&b,&m);
	scanf("%lld%lld%lld%lld",&mp[1][1],&mp[1][2],&mp[2][1],&mp[2][2]);
	if(b == 0){
		cout<<1%m<<" "<<0%m<<endl<<0%m<<" "<<1%m;
		return 0;
	}
	solve(b);
	cout<<mp[1][1] % m<<" "<<mp[1][2] % m<<endl<<mp[2][1] % m<<" "<<mp[2][2] % m;
}
