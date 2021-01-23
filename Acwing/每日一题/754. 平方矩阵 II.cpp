#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	while(cin>>n){
		if(n == 0) return 0;
		int num[n];
		for(int i = 0;i < n;i++) num[i] = i+1;
		for(int i = 0;i < n;i++){
			for(int j = i;j >= 1;j--) cout<<num[j]<<" ";
			for(int j = 0;j <n-i;j++) cout<<num[j]<<" ";
			cout<<endl;
		}
		cout<<endl;
	}
}
