#include <bits/stdc++.h>
using namespace std;

void outmid(int m,int i){
	if(m == 0) ;
	else if(m > 0){
		if(m == 1) cout<<"+x^"<<i;
		else cout<<"+"<<m<<"x^"<<i;
	}
	else{
		if(m == -1) cout<<"-x^"<<i;
		else cout<<m<<"x^"<<i;
	}
}

void out0(int m){
	if(m == 0) ;
	else if(m > 0){
		if(m == 1) cout<<"+1";
		else cout<<"+"<<m;
	}
	else{
		if(m == -1) cout<<"-1";
		else cout<<m;
	}
}

void out1(int m){
	if(m == 0) ;
	else if(m > 0){
		if(m == 1) cout<<"+x";
		else cout<<"+"<<m<<"x";
	}
	else{
		if(m == -1) cout<<"-x";
		else cout<<m<<"x";
	}
}

int main()
{
	int n;
	scanf("%d",&n);
	int m;
	scanf("%d",&m);
	if(n >= 2){
		if(m != 0 && m != 1 && m != -1) cout<<m<<"x^"<<n;
		else if(m == 1) cout<<"x^"<<n;
		else if(m == -1) cout<<"-x^"<<n;
		else ;
	}
	else if(n == 1) out1(m);
	else out0(m);
	for(int i = n - 1;i >= 0;i--){
		scanf("%d",&m);
		if(i == 1) out1(m);
		else if(i == 0) out0(m);
		else outmid(m,i);
	}
}
