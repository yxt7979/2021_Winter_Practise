#include <bits/stdc++.h>
using namespace std;

int main()
{
	double num;
	while(cin>>num && num != 0.00){
		double ans = 0;
		for(double i = 2;;i++){
			ans += 1.0 / i;
			if(ans >= num){
				printf("%.0lf card(s)\n",i - 1);
				break;
			}
		}
	}
	return 0;
}
