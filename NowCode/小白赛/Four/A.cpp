#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	int AC[n+1];
	int UNAC[n+1];
	bool can[n+1];
	memset(can,true,sizeof(can));
	memset(AC,0,sizeof(AC));
	memset(UNAC,0,sizeof(UNAC));
	for(int i = 0;i < m;i++){
		int a;
		string s;
		cin>>a;cin>>s;
		if(can[a] == true){
			if(s[0] == "AC") AC[a] ++ ;
			else UNAC[a] ++ ;
			if(AC[a] * 2 < UNAC[a]) can[a] = false;
		}
	}
	bool ok = false;
	for(int i = 1;i <= n;i++){
		if(can[i] && AC[i] != 0) {
			printf("%d ",i);
			ok = true;
		}
	}
	if(!ok) printf("-1");
	return 0;
}

/*
10 3
1 AC
1 UNAC
2 UNAC
2 UNAC
1 AC
1 UNAC
1 UNAC
1 UNAC
2 UNAC
2 AC
*/
