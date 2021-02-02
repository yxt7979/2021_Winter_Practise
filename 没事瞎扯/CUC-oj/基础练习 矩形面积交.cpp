#include <bits/stdc++.h>
using namespace std;

int main()
{
	double x1,y1,x2,y2,x3,y3,x4,y4;
	scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
	double X1 = max(min(x1,x2),min(x3,x4));
	double Y1 = max(min(y1,y2),min(y3,y4));
	double X2 = min(max(x1,x2),max(x3,x4));
	double Y2 = min(max(y1,y2),max(y3,y4));
	if(X2 >= X1 && Y2 >= Y1){
		printf("%.2lf",(X2 - X1) * (Y2 - Y1));
	}
	else{
		printf("0.00");
	}
}
