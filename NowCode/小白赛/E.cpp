#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b;
        long long ans = 0;
        scanf("%d%d",&a,&b);
        for(int x = 1;x <100000;x++){
            if(x-b != 0 && a * x % (x - b) == 0) {
            	cout<<x<<endl;
            	ans ++ ;
			} 
        }
        printf("%d\n",ans);
    }
}
