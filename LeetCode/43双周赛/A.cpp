#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int k = 1;
	long long ans = 0;
	int onemon = 0;
	while(n--){
		ans += onemon + k;
		k++;
		if(k == 8){
			k = 1;
			onemon ++ ;
		}
	}
	cout<<ans;
}
