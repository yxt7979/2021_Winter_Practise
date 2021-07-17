#include <bits/stdc++.h>
using namespace std;

int revere(int now){
	string s;
	s = to_string(now);
	int ans = 0;
	int mod = 1;
	for(int i = 0;i < s.length();i++){
		ans += mod * (s[i] - '0');
		mod *= 10;
	}
	return ans;
}

int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d",revere(revere(a) + revere(b)));
}
