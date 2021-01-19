#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int n = s.length();
	int a = 0;
	for(int i = 0;i < n;i++){
		if(s[i] == 'a') a ++ ;
		else{
			if(a <= 0) {
				printf("Bad");
				return 0;
			}
			else{
				a -- ;
			}
		}
	}
	if(a == 0)printf("Good");
	else printf("Bad");
}
