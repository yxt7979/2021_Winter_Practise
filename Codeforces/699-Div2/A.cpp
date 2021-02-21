#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int x,y;
		scanf("%d%d",&x,&y);
		string s;
		cin>>s;
		int a = 0,b = 0,c = 0,d = 0;
		for(int i = 0;i < s.length();i++){
			if(s[i] == 'L') a ++ ;
			else if(s[i] == 'R') b ++ ;
			else if(s[i] == 'U') c ++ ;
			else d ++ ;
		}
		if((x > 0 && b < x) || (x < 0 && a < -1 * x) || (y > 0 && c < y) || (y < 0 && d < -1 * y)) printf("NO\n");
		else printf("YES\n"); 
	}
	return 0;
}
