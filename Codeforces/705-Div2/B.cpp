#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int h,m;

bool check(int aa){
	string a = to_string(aa);
	for(int i = 0;i < a.length();i++){
		if(a[i] != '0' && a[i] != '1' && a[i] != '2' && a[i] != '5' && a[i] != '8'){
			return false;
		}
	}
	return true;
}

int re(int aa){
	int ans = 0;
	if(aa >= 10){
		int shou = aa / 10;
		if(shou == 5) ans += 2;
		else if(shou == 2) ans += 5;
		else ans += shou;
	}
	int mo = aa % 10;
	if(mo == 5) ans += 20;
	else if(mo == 2) ans += 50;
	else ans += mo * 10;
	return ans;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&h,&m);
		int a,b;
		scanf("%d:%d",&a,&b);
		bool ok = false;
		if(check(a) && re(a) < m){
			for(int i = b;i < m;i++){
				if(check(i) && re(i) < h){
					if(a < 10) cout<<"0"<<a<<":";
					else cout<<a<<":";
					if(i < 10) cout<<"0"<<i<<endl;
					else cout<<i<<endl;
					ok = true;
					break; 
				}
			}
		}
		if(ok) continue;
		for(int i = (a + 1) % h;;i = (i + 1) % h){
			if(check(i) && re(i) < m){
				for(int j = 0;j < m;j++){
					if(check(j) && re(j) < h){
						if(i < 10) cout<<"0"<<i<<":";
						else cout<<i<<":";
						if(j < 10) cout<<"0"<<j<<endl;
						else cout<<j<<endl;
						ok = true;
						break; 
					}
				}
			}
			if(ok) break;
		}
	}	
	return 0;
} 
