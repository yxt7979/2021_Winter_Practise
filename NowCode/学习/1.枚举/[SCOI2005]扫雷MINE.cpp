#include <bits/stdc++.h>
using namespace std;
int num[10010];
int qi[10010];

int n;

bool check(){
	for(int i = 2;i <= n;i++){
		qi[i] = num[i-1] - qi[i-1] - qi[i-2];
		if(qi[i] != 0 && qi[i] != 1) return false;
	}
	if(qi[n] + qi[n-1] == num[n]) return true;
	else return false;
}

int main()
{
	int ans = 0;
	scanf("%d",&n);
	for(int i = 1;i <= n;i++) scanf("%d",&num[i]);
	qi[1] = 1;
	if(check()) ans ++ ;
	qi[1] = 0;
	if(check()) ans ++ ;
	cout<<ans;
}
