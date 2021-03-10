#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		vector<double> a;
		vector<double> b;
		for(int i = 0;i < 2 * n;i++){
			double x,y;
			scanf("%lf%lf",&x,&y);
			if(x == 0 && y < 0) a.push_back(-1*y);
			else if(x == 0 && y > 0) a.push_back(y);
			else if(x < 0 && y == 0) b.push_back(-1 * x);
			else b.push_back(x);
		}
		sort(a.begin(),a.end());
		sort(b.begin(),b.end());
		double ans = 0;
		for(int i = 0;i < n;i++){
			ans += sqrt(a[i] * a[i] + b[i] * b[i]);
		}
		printf("%.15lf\n",ans);
	}
	return 0;
}
