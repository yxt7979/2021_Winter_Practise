#include <bits/stdc++.h>
using namespace std;
#define PI 3.1415926
int main()
{
	double a,r;
	cin>>a>>r;
	double x = sqrt(6) / 12.0 * a;
	double R = sqrt(r * r - x * x);
	double r1 = sqrt(3) / 6.0 * a;
	double r2 = sqrt(3) / 3.0 * a;
	if(R <= r1){
		double ans = PI * R * R * 4;
		printf("%.6lf",ans);
	}
	else if(R >= r2){
		double ans = sqrt(3) * a * a;
		printf("%.6lf",ans);
	}
	else{
		double ans = PI * R * R * 4;
		double jian;
		double b = asin(sqrt(R * R - a * a / 12) / R) / PI; 
		double Sshan = PI * R * R * b;
		jian = Sshan - sqrt(R * R - a * a / 12) * r1;
		ans -= 12 * jian;
		printf("%.6lf",ans);
	}
} 
