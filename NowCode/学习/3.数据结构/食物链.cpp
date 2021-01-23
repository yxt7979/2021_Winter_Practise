#include <bits/stdc++.h>
using namespace std;
const int MaxSize = 200000;
int f[MaxSize];
int n,k;

int find(int x){
	return x == f[x] ? x : f[x] = find(f[x]);
}
void merge(int a,int b){
	f[find(a)] = find(b);
}

int main()
{
	cin>>n>>k;
	for(int i = 1;i <= 3*n;i++){
		f[i] = i;
	}
	int cnt = 0;
	for(int i = 0;i < k;i++){
		int d,a,b;
		cin>>d>>a>>b;
		if(a > n || b > n) {
			cnt ++ ;
			continue;
		}
		if(d == 1){
			if(find(a) == find(b + n) || find(a) == find(b + n*2)){
				cnt ++ ;
			}
			else{
				merge(a,b);
				merge(a + n,b + n);
				merge(a + 2 * n,b + 2 * n);
			}
		}
		else{
			if(find(a) == find(b) || find(a) == find(b + 2 * n)){
				cnt ++ ;
			}
			else{
				merge(a,b + n);
				merge(a + n,b + 2 * n);
				merge(a + 2 * n,b);
			}
		}
	}
	cout<<cnt;
}
