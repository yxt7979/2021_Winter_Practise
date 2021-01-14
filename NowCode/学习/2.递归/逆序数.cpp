#include <bits/stdc++.h>
using namespace std;

const int MaxSize = 100010;

int a[MaxSize];
int b[MaxSize];

long long cnt = 0; 

void merge(int l,int mid,int r){
	int p1 = l;
	int p2 = mid + 1;
	for(int i = l;i <= r;i++){
		if((p2 > r) || ((p1 <= mid) && (a[p1] < a[p2]))){
			b[i] = a[p1 ++ ];
		}
		else{
			b[i] = a[p2 ++ ];
			cnt += mid - p1 + 1;
		}
	}
	for(int i = l;i <= r;i++) a[i] = b[i];
}

void merge_sort(int l,int r){
	int mid = (l + r) >> 1;
	if(l < r){
		merge_sort(l,mid);
		merge_sort(mid + 1,r);
	}
	merge(l,mid,r);
}

int main()
{
	int n;
	scanf("%d",&n);
	for(int i = 0;i < n;i++) scanf("%d",&a[i]);
	merge_sort(0,n-1);
	printf("%lld",cnt);	
} 
