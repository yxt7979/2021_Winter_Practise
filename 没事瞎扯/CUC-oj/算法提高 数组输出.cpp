#include <bits/stdc++.h>
using namespace std;

int main()
{
	int num[4][5];
	int now = -1;
	int ansx = 0,ansy = 0;
	for(int i = 1;i <= 3;i++){
		for(int j = 1;j <= 4;j++){
			scanf("%d",&num[i][j]);
			if(i == 1 && j == 1) {
				now = num[i][j];
				ansx = 1;
				ansy = 1;
			}
			if(abs(num[i][j]) > abs(now)){
				ansx = i;
				ansy = j;
				now = num[i][j];
			}
//			cout<<now<<" "<<ansx<<" "<<ansy<<endl;
		}
	}
	printf("%d %d %d",abs(now),ansx,ansy);
}
