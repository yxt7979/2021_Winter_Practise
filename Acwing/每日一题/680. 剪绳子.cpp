#include <bits/stdc++.h>
using namespace std;
const int MaxSize = 100010;

double num[MaxSize];
int n,m;

bool check(double a){
	int cnt = 0;
	for(int i = 0;i < n;i++){
		cnt += num[i] / a;
	}
	if(cnt >= m) return true;
	else return false;
}

int main()
{
	cin>>n>>m;	
	for(int i = 0;i < n;i++) {
		cin>>num[i];
	}
	double l = 0,r = 1e9;
	double ans;
	while(r - l > 0.001){
		double mid = l + (r - l) / 2;
		if(check(mid)) {
			ans = mid;
			l = mid;
		}
		else r = mid;
	}
	printf("%.2lf",ans);
} 
