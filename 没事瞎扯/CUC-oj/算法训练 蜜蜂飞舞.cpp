#include <bits/stdc++.h>
using namespace std;
double dx1,dy1,dz1,dx2,dy2,dz2;
int main()
{
	int n;
	scanf("%d",&n);
	while(n--){
		int a,b,c,d,e,f,t;
		scanf("%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&t);
		dx1 += a * t;
		dy1 += b * t;
		dz1 += c * t;
		dx2 += d * t;
		dy2 += e * t;
		dz2 += f * t;
	}
	double x1,y1,z1,x2,y2,z2;
	scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&z1,&x2,&y2,&z2);
	x1 += dx1;y1 += dy1;z1 += dz1;
	x2 += dx2;y2 += dy2;z2 += dz2;
	double d1 = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	double ans = sqrt(d1 * d1 + (z1 - z2) * (z1 - z2));
	printf("%.4lf",ans);
}

/*
3
1 1 1 1 -1 1 2
2 1 2 0 -1 -1 2
2 0 0 -1 1 1 3
3 0 1 2 0 0
*/
