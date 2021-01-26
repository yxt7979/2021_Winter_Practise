#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	int num[n];
	for(int i = 0;i < n;i++){
		scanf("%d",&num[i]);
	}
	sort(num,num + n);
	int delta = num[n-1] - num[0] - 17;
	if(delta <= 0) {
		printf("0");
		return 0;
	}
	int H = num[n-1];
	int ans = 0x3f3f3f3f;
	for(int i = H;i >= H - delta;i--){
		int L = i - 17;
		int tmp = 0;
		for(int j = 0;j < n;j++){
			if(num[j] < L){
//				cout<<j<<" "<<num[j]<<endl;
				tmp += (L - num[j]) * (L - num[j]);
			}
			else{
				break;
			}
		} 
		for(int j = n-1;j >= 0;j--){
			if(num[j] > i){
				tmp += (i - num[j]) * (i - num[j]);
			}
			else break;
		}
//		cout<<tmp<<endl;
		ans = min(ans,tmp);
	}
	printf("%d",ans);
}
