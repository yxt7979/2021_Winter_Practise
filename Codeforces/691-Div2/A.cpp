#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string a,b;
		cin>>a>>b;
		int na = 0,nb = 0;
		for(int i = 0;i < n;i++){
			if(a[i] > b[i]) na ++;
			else if(a[i] < b[i]) nb ++ ;
		}
		if(na > nb) cout<<"RED\n";
		else if(na < nb) cout<<"BLUE\n";
		else cout<<"EQUAL\n";
	}
	return 0;
}
