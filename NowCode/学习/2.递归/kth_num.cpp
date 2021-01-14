#include <bits/stdc++.h>
using namespace std;
const int MaxSize = 5e6 + 10;

int a[MaxSize];
int n,k;

inline int read(){
    int x = 0, f = 1;
    char ch = getchar();
    while(ch < '0' || ch > '9'){
        if (ch == '-')
            f = -1;
        ch = getchar();
    }
    while(ch >= '0' && ch <= '9'){
        x = (x<<1) + (x<<3) + (ch^48);
        ch = getchar();
    }
    return x * f;
}

//void quick_sort(int l,int r){
//	int i = l;int j = r;
//	int mid = (l + r) >> 1;
//	int x = a[mid];
//	while(i <= j){
//		while(a[i] > x) i++;
//		while(a[j] < x) j--;
//		if(i <= j){
//			swap(a[i],a[j]);
//			i++;
//			j--;
//		}
//	}
//	if(l < j) quick_sort(l,j);
//	if(r > i) quick_sort(i,r);
//}

int solve(int l,int r){
	if(l == r) return a[l];
	int i = l;int j = r;
	int mid = (l + r) >> 1;
	int x = a[mid];
	while(i <= j){
		while(a[i] < x) i++;
		while(a[j] > x) j--;
		if(i <= j){
			swap(a[i],a[j]);
			i++;
			j--;
		}
	}
	if(k < j) solve(l,j);
	else if(i < k) solve(i,r);
	else return a[k];
}

int main()
{
	int t;
	t = read();
	while(t--){
		n = read();
		k = read() - 1;
		for(int i = 0;i < n;i++) a[i] = read();
//		quick_sort(0,n-1);
//		for(int i = 0;i < n;i++) cout<<a[i]<<" ";
		printf("%d\n",solve(0,n-1));
	}
}
