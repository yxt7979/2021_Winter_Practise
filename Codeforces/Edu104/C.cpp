#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MaxSize = 110;
int c3[MaxSize];
int c2[MaxSize];

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		memset(c3,0,sizeof(c3));
		memset(c2,0,sizeof(c2));
		if(n % 2 != 0){
			int Maxchang = (n - 1) / 2;
			for(int i = 1;i <= n-1;i++){
				for(int j = i+1;j <= n;j++){
					if(c3[i] < Maxchang){
						printf("1 ");
						c3[i] ++ ;
					}
					else{
						printf("-1 ");
						c3[j] ++ ;
					}
				}
			}
		}
		else{
			int chang3;
			int changp;
			int all = n * (n - 1) / 2;
			for(int i = all;i >= 0;i--){
				if((i * 3 + (all - i) * 2) % n == 0){
					chang3 = i / n;
					changp = (all - i) * 2 / n;
					break;
				}
			}
//			cout<<chang3<<" "<<changp<<endl;
			for(int i = 1;i <= n-1;i++){
				for(int j = i+1;j <= n;j++){
					if(c3[i] < chang3){
						printf("1 ");
						c3[i] ++ ;
					}
					else if(c2[i] < changp){
						printf("0 ");
						c2[i] ++ ;
						c2[j] ++ ;
					}
					else{
						printf("-1 ");
						c3[j] ++ ;
					}
				}
			}
		}
		printf("\n");
	}
	return 0;	
} 
