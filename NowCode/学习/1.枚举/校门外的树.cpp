//注意题目是从0开始的。。。。 
#include <bits/stdc++.h>
using namespace std;
const int MaxSize = 10010;

int delta[MaxSize];

int main()
{
	int len,k;
	cin>>len>>k;
	delta[0] = 1;
	for(int i = 0;i < k;i++){
		int a,b;
		cin>>a>>b;
		delta[a] -- ;
		delta[b+1] ++ ;
	}
	int ans = 0;
	if(delta[0] > 0) ans ++ ;
	for(int i = 1;i <= len;i++){
		delta[i] += delta[i-1];
		if(delta[i] > 0) {
			ans ++ ;
		} 
	}
	cout<<ans;
}
