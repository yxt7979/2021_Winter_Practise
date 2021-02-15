#include <bits/stdc++.h>
using namespace std;

int a,b;

void getnum(int pos1,int pos2){
	cout<<"? "<<pos1<<endl;
	fflush(stdout);
	cin>>a;
	cout<<"? "<<pos2<<endl;
	fflush(stdout);
	cin>>b;
}

int main(){
	int n;
	scanf("%d",&n);
	int l = 1;
	int r = n;
	while(l < r){
		int mid = l + (r - l) / 2;
		getnum(mid,mid + 1);
		if(a > b) l = mid+ 1;
		else r = mid;
	}
	cout<<"! "<<l<<endl;
	return 0;
} 

