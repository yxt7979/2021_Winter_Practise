#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	int sum = 0;
	int now = n;
	while(now){
		sum += (now % 10);
		now /= 10;
	}
	for(int i = n+1;;i++){
		int t = i;
		int tmpsum = 0;
		while(t){
			tmpsum += (t % 10);
			t /= 10;
		}
		if(tmpsum == sum){
			cout<<i;
			return 0;
		}
	}
}
