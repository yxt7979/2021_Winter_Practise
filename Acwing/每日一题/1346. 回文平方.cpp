#include <bits/stdc++.h>
using namespace std;

void check(int num,int mod){
	int a = num;
	string amod;
	while(a){
		int t = a % mod;
		if(t >= 0 && t <= 9) amod += '0' + t;
		else amod += 'A' + t - 10;
		a /= mod;
	}
	reverse(amod.begin(),amod.end());
	num = num * num;
	string ans;
	while(num){
		int t = num % mod;
		if(t >= 0 && t <= 9) ans += '0' + t;
		else ans += 'A' + t - 10;
		num /= mod;
	}
	string k;
	k.assign(ans.rbegin(),ans.rend());
	if(k == ans) cout<<amod<<" "<<k<<endl;
}

int main()
{
	int b;
	cin>>b;
	for(int i = 1;i <= 300;i++){
		check(i,b);
	}
}
