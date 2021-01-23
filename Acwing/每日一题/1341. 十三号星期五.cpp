#include <bits/stdc++.h>
using namespace std;

int day[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
bool is_run(int year){
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main()
{
	int n;
	scanf("%d",&n);
	int ans[7] = {0};
	long long cnt = 13;
	for(int i = 1900;i < 1900 + n;i++){
		for(int j = 1;j <= 12;j++){
			ans[cnt % 7] ++ ;
			if(j != 2) cnt += day[j];
			else{
				if(is_run(i)) cnt += 29;
				else cnt += day[2];
			}
		}
	}	
	cout<<ans[6]<<" ";
	for(int i = 0;i < 6;i++) cout<<ans[i]<<" ";
} 
