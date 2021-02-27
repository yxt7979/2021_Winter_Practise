//https://www.nowcoder.com/study/live/527/2/1 1:10
#include <bits/stdc++.h>
using namespace std;
int ans = 0;

void hanoi(int from,int to,int mid,int now){
	if(now == 1) {
		ans ++ ;
		return ;
	}
	else{
		hanoi(from,mid,to,now - 1);
		ans ++ ;
		hanoi(mid,to,from,now - 1);
	}
}

int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	n = n % m == 0 ? n/m : n/m + 1;
	hanoi(1,3,2,n);
	printf("%d",ans);
}
