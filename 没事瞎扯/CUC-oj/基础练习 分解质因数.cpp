#include <bits/stdc++.h>
using namespace std;

bool is_prime[100010];
int prime[100010];
int a,b;

void get_prime(int n)
{
    int i,j,p=0,flag;
    memset(is_prime,true,sizeof(is_prime));
    is_prime[0]=is_prime[1]=false;
    for(i=2; i<=n; i++)
    {
        if(is_prime[i])
        {
            prime[p++]=i;
            for(j=i*2; j<=n; j+=i)
                is_prime[j]=false;
        }
    }
    if(p >= b)return;
}
int main()
{
	scanf("%d%d",&a,&b);
	get_prime(100010);
	for(int i = a;i <= b;i++){
		printf("%d=",i);
		int tmp = i;
		for(int j = 2;j <= i;j++){
			if(is_prime[j]){
				while(tmp % j == 0){
					printf("%d",j);
					tmp /= j;
					if(tmp != 1) printf("*");
				}
			}
			if(tmp == 1) break;
		}
		printf("\n");
	}
	return 0;
}
