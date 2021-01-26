#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n,m;
		scanf("%d%d",&n,&m);
		int num[n];
		vector<ll> V1;
		vector<ll> V2;
		for(int i = 0;i < n;i++) scanf("%d",&num[i]);
		for(int i = 0;i < n;i++){
			int x;scanf("%d",&x);
			if(x == 1) V1.push_back(num[i]);
			else V2.push_back(num[i]);
		}
		sort(V1.rbegin(),V1.rend());
		sort(V2.rbegin(),V2.rend());
		int ans = 0x3f3f3f3f;
		for(int i = 1;i < V1.size();i++){
			V1[i] += V1[i-1];
		}
		for(int i = 1;i < V2.size();i++){
			V2[i] += V2[i-1];
		}
		int p2 = 0;
		for(p2 = 0;p2 < V2.size();p2++){
			if(V2[p2] >= m) {
				ans = min(ans,2 * p2 + 2);
				break;
			}
		}
	//	cout<<"p2 : "<<p2<<endl;
		if(p2 == V2.size()) p2--;
		for(int i = 0;i < V1.size();i++){
			int tmp = i+1;
			ll now = V1[i];
			if(now < m && V2.size()){
				while(now + V2[p2] >= m){
					p2--;
					if(p2 == -1) break;
				}
				if(p2+1 < V2.size() && now + V2[p2+1] >= m){
					p2++;
					tmp += 2*(p2 + 1);
					now += V2[p2];
				}
			}
			if(now >= m)ans = min(ans,tmp);
		}
		if(ans == 0x3f3f3f3f) printf("-1\n");
		else printf("%d\n",ans);
	}
}
