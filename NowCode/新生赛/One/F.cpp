#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	char A[n];
	char B[n];
	for(int i = 0;i < n;i++) cin>>A[i];
	for(int i = 0;i < n;i++) cin>>B[i];
	int m = 0,M = 0;
	for(int i = 0;i < n;i++){
		if(A[i] == B[i]){
			M += 2;
		}
		else{
			M += 1;
		}
	}
	cout<<M<<" "<<m;
} 
