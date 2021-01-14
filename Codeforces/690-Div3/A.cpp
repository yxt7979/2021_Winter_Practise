#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int num[n];
		for(int i = 0;i < n;i++) scanf("%d",&num[i]);
		int p1 = 0;
		int p2 = n-1;
		bool p11 = true;
		for(int i = 0;i < n;i++){
			if(p11) {
				printf("%d ",num[p1 ++ ]);
				p11 = false;
			}
			else {
				printf("%d ",num[p2 -- ]);
				p11 = true;
			}
		}
	}	
	return 0;
} 
