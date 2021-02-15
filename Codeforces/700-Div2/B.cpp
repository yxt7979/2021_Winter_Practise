#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MaxSize = 100010;

struct P{
	ll att,hea;
};
P Mon[MaxSize];

bool cmp(P a,P b){
	return a.att < b.att;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		ll a,b,n;
		scanf("%lld%lld%lld",&a,&b,&n);
		for(int i = 0;i < n;i++) scanf("%lld",&Mon[i].att);
		for(int i = 0;i < n;i++) scanf("%lld",&Mon[i].hea);
		sort(Mon,Mon + n,cmp);
		ll shou = 0;
		bool can = true;
		for(int i = 0;i < n-1;i++){
			int time;
			if(Mon[i].hea % a == 0) time = Mon[i].hea / a;
			else time = Mon[i].hea / a + 1;
			shou += time * Mon[i].att;
			if(shou > b) {
				can = false;
				break;
			}
		}
		if(can) {
			b -= shou;
			int time1;
			if(b % Mon[n-1].att == 0) time1 = b / Mon[n-1].att;
			else time1 = b / Mon[n-1].att + 1;
			int time2;
			if(Mon[n-1].hea % a == 0) time2 = Mon[n-1].hea / a;
			else time2 = Mon[n-1].hea / a + 1;
			if(time1 >= time2) cout<<"YES\n";
			else cout<<"NO\n";
		}
		else cout<<"NO\n";
	}
} 
