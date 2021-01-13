#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int p = n / 2;
	if(n % 2 == 0) cout<<(p + 1) * (p + 1);
	else cout<<(p + 1) * (p + 2) * 2;
}
