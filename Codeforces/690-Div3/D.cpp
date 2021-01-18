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
		long long sum = 0;
		for(int i = 0;i < n;i++) {
			scanf("%d",&num[i]);
			sum += num[i];
		}
		int ans = 0;
		for(int i = n;i >= 1;i--){
			if(sum % i == 0){
				int tmp = sum / i;
				int j = 0;
				int tmpsum = 0;
				bool can = true;
				while(j < n){
					tmpsum += num[j];
//					cout<<"tmpsum : "<<tmpsum<<" tmp : "<<tmp<<endl;
					if(tmpsum > tmp){
						can = false;
						break;
					}
					else if(tmpsum == tmp){
						tmpsum = 0;
						j ++ ;
					}
					else{
						j ++ ;
					}
				}
				if(can) {
					ans = tmp;
					break;
				}
			}
//			cout<<i<<endl;
		}
//		cout<<ans;
		printf("%d\n",n - sum / ans);
	}	
}
