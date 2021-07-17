#include <bits/stdc++.h>
using namespace std;
const int N = 50000;
int p[N + 1],cnt;
bool vis[N + 1];

void get(){
	for(int i = 2;i <= N;i++){
		if(!vis[i]) p[++cnt] = i;
		for(int j = 1;p[j] <= N / i;j++){
			vis[p[j] * i] = true;
			if(i % p[j] == 0) break;
		}
	}
}

int main()
{
    get();
//    for(int i = 1;i <= 100;i++) cout<<p[i]<<" "<<vis[p[i]]<<endl;
	int x;
	scanf("%d",&x);
	printf("%d=",x);
	for(int i = 1;;i++){
		while(x % p[i] == 0){
			x /= p[i];
			if(x != 1) printf("%d*",p[i]);
			else {
				printf("%d",p[i]);
				return 0;
			}
		}
	}
}
