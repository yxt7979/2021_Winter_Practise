#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int res = a * b;
	string s = to_string(res);
	string A = to_string(a);
	string B = to_string(b);
	for(int i = 0;i < s.length() - A.length();i++) cout<<" ";
	cout<<A<<endl;
	cout<<"¡Á";
	for(int i = 0;i < s.length() - B.length() - 1;i++) cout<<" ";
	cout<<B<<endl;
	cout<<"©¥©¥©¥\n";
	int now = 0;
	for(int i = B.length() - 1;i >= 0;i--){
		int tmp = (B[i] - '0') * a;
		string T = to_string(tmp);
		for(int j = 0;j < s.length() - T.length() - now;j++){
			cout<<" ";
		}
		cout<<T<<endl;
		if(B.length() == 1) return 0;
		now ++ ;
	}
	cout<<"©¥©¥©¥\n";
	cout<<s;
	
}
