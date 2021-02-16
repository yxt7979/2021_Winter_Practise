#include <bits/stdc++.h>
using namespace std;

int main()
{
	double a,b,c,d;
	scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
	for(double i = -100;i <= 100;i += 0.01){
		if(abs(a * i * i * i + b * i * i + c * i + d) <= 0.001){
			printf("%.2lf ",i);
		}
	}
}
