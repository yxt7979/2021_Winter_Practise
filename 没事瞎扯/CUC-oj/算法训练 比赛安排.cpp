#include <bits/stdc++.h>
using namespace std;
const int MaxSize = 100;

bool visited[MaxSize][MaxSize];
int n;

int main()
{
	scanf("%d",&n);
	int N = pow(2,n);
	for(int i = 1;i <= N;i++) visited[i][i] = true;
	for(int i = 1;i <= N - 1;i++){
		printf("<%d>",i);
		bool have[N + 10];
		memset(have,false,sizeof have);
		int cnt = 0;
		for(int j = 1;j <= N;j++){
 			if(!have[j]){
				for(int k = 1;k <= N;k++){
//					if(i == 2 && j == 30 && k == 32) cout<<"adfa"<<have[32];
					if(!visited[j][k] && !have[k]){
						printf("%d-%d",j,k);
						have[k] = true;
						have[j] = true;
						visited[j][k] = true;
						visited[k][j] = true;
						cnt ++ ;
						break;
					}
				}
				if(cnt != pow(2,n-1)) printf(" ");
				else {
					printf("\n");
					break;
				}
			}
		}
	}
}
