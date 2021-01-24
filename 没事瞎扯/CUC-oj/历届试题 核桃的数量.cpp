#include <bits/stdc++.h>
using namespace std;
int lcm(int a,int b){
	return a / __gcd(a,b) * b;
}
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	printf("%d",lcm(a,lcm(b,c)));
}
