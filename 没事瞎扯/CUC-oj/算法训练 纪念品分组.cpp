#include <bits/stdc++.h>
using namespace std;

int main()
{
	int W,n;
	scanf("%d%d",&W,&n);
	int ans = 0;
	int num[n];
	for(int i = 0;i < n;i++){
		scanf("%d",&num[i]);
	}	
	sort(num,num + n);
	int left = 0;
	int right = n-1;
	while(left <= right){
		if(left == right){
			ans ++ ;
			break;
		}
		if(num[left] + num[right] > W) {
			right -- ;
			ans ++ ;
		}
		else{
			left ++ ;
			right -- ;
			ans ++ ;
		}
	}
	printf("%d",ans);
} 
