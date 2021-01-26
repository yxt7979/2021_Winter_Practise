#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	int num[n];
	int sum = 0;
	for(int i = 0;i < n;i++) {
		scanf("%d",&num[i]);
		sum += num[i];
	}
	sort(num,num + n);
	int tmp = 0;
	for(int i = 0;i < n/2;i++) tmp += num[i];
	int ans = abs(sum - tmp - tmp);
	if(n % 2 == 0){
		cout<<0<<" "<<ans;
	}	
	else{
		int ttmp = 0;
		for(int i = 0;i < n/2 + 1;i++) ttmp += num[i];
		ans = max(ans,abs(sum - ttmp - ttmp));
		cout<<1<<" "<<ans;
	}
} 
