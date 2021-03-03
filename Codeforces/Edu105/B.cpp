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
		int z[4];
		bool ans = true;
		memset(z,0,sizeof z);
		int sum = 0;
		for(int i = 0;i < 4;i++) {
			scanf("%d",&z[i]);
			sum += z[i];
		}
		for(int i = 0;i < 4;i++){
			if(z[i] == 0){
				if(z[(i+1)%4]==n||z[(i+3)%4]==n) ans = false;
				else {
					int t = (z[(i+1)%4]==n-1?1:0)+(z[(i+3)%4]==n-1?1:0);
					if(z[(i+2) % 4] < t) ans = false;
				}
			}
			else if(z[i] == 1){
				if(z[(i+1)%4]==n&&z[(i+3)%4]==n) ans = false;
				else{
					if(z[(i+1)%4]==n-1&&z[(i+3)%4]==n-1){
						if(z[(i+2)%4] == 0) ans = false;
					}
					else if(z[(i+1)%4]==n||z[(i+3)%4]==n){
						int t=(z[(i+1)%4]==n-1?1:0)+(z[(i+3)%4]==n-1?1:0);
						if(z[(i+2)%4] <= t) ans = false;
					}
				}
			}
		}
		if(!ans) printf("no\n");
		else printf("yes\n");
	}
	return 0;
}
