#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int ans = 1;
	int n2 = 0,n5 = 0;
	for(int i = 1;i <= n;i++){
		int x = i;
		while(x % 2 == 0){
			n2 ++ ;
			x /= 2;
		}
		while(x % 5 == 0){
			n5 ++ ;
			x /= 5;
		}
		ans = (ans * x) % 10;
	}
	int tmp = min(n2,n5);
	for(int i = 1;i <= n2-tmp;i++) ans = (ans * 2) % 10;
	for(int i = 1;i <= n5-tmp;i++) ans = (ans * 5) % 10;
	cout<<ans;
}
