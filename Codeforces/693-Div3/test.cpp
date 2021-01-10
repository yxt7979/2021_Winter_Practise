#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  scanf("%d",&t);
  while(t--){
  	int n;
    scanf("%d",&n);
    long long num[n];
    for(int i = 0;i < n;i++) scanf("%d",&num[i]);
    long long ans = 0;
    for(int i = n-1;i >= 0;i--){
    	if(i + num[i] < n) num[i] += num[i + num[i]];
        ans = max(ans,num[i]);
    }
    printf("%d\n",ans);
  }
}
