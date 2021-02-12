#include <bits/stdc++.h>
using namespace std;
typedef pair<double,double> P;

int main()
{
	double D,V,dper,p0;
	int n;
	scanf("%lf%lf%lf%lf%d",&D,&V,&dper,&p0,&n);
	double M = V * dper;
	P sta[n+2];
	sta[0].first = 0;
	sta[0].second = p0;
	for(int i = 1;i <= n;i++){
		double a,b;
		scanf("%lf%lf",&a,&b);
		sta[i].first = a;
		sta[i].second = b;
	}
	sta[n+1].first = D;
	sta[n+1].second = 0x3f3f3f3f;
	sort(sta,sta + n + 2);
//	for(int i = 0;i <= n;i++) cout<<sta[i].first<<" "<<sta[i].second<<endl;
	double ans = 0;
	int pos = 0;
	for(int i = 1;i <= n+1;i++){
		double deltadis = sta[i].first - sta[i-1].first;
		if(deltadis > M){
			printf("No Solution");
			return 0;
		}
		while(deltadis){
			while(sta[i].first - deltadis - sta[pos].first >= M) pos ++ ;
			for(int j = pos;j < i;j++){
				if(sta[j].second < sta[pos].second){
					pos = j;
				}
			}
			double Mdis = M - (sta[i].first - deltadis - sta[pos].first);
			if(Mdis > deltadis) Mdis = deltadis;
			deltadis -= Mdis;
			ans += Mdis / dper * sta[pos].second;
		}
	}
	printf("%.2lf",ans);
} 
