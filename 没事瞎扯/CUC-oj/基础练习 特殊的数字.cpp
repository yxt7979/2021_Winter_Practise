#include <bits/stdc++.h>
using namespace std;

int main()
{
	for(int i = 100;i <= 999;i++){
		int check = 0;
		int f = i;
		while(f > 0){
			check += pow(f%10,3);
			f /= 10;
		}
		if(check == i) cout<<i<<endl; 
	}
}
