#include <bits/stdc++.h>
using namespace std;
const int M = 1e5 + 10;

int num[M];
int n;

int main()
{
	int k = 1,start = 0;
	scanf("%d",&n);
	for(int i = 1;i <= n;i++){
		scanf("%d",&num[i]);
		if(num[i] != i && start == 0){
			start = i;
		}
		if(num[i] == start){
			k = i - start + 1;
		}
	}
//	cout<<k<<" "<<start;
	for(int i = 1;i <= n;i++){
		if(num[i] == i) continue;
		if(i + k - 1 > n || num[i+k-1] != i){
			printf("no");
			return 0;
		}
		int sum = i + i + k - 1;
		for(int j = i;j < i + k/2;j++){
			swap(num[j],num[sum-j]);
		}
	}
	printf("yes\n%d",k);
}
