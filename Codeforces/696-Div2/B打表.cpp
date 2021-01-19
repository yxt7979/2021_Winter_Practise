#include <bits/stdc++.h>
using namespace std;
bool prime[10000005];
const int N = 10000000;
void isprime()
{
    fill(prime,prime + N,true);
    prime[1] = false;
    for(int i = 2; i <= N; ++i)
    {
        if(prime[i])
        {
            for(int j = i * 2;j <= N;j += i)
            {
                prime[j] = false;
            }
        }
    }
}
int main()
{
	int t;
	scanf("%d",&t);
	isprime();
	while(t--){
		int d;
		scanf("%d",&d);
		int f,f_;
		for(int i = 1 + d;;i++){
			if(prime[i] == true){
				f = i;
				break;
			}
		}
		for(int i = f+d;;i++){
			if(prime[i] == true){
				f_ = i;
				break;
			}
		}
		printf("%d\n",f * f_);
	}
}
