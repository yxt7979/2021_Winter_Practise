#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int ans = 0;
	ans += abs(b-c);
	ans += min(abs(b-a),abs(a-c));
	printf("%d",ans);
}
