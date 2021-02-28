#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int len,k;
		scanf("%d%d",&len,&k);
		int A[26],B[26];
		memset(A,0,sizeof(A));
		memset(B,0,sizeof B);
		string a,b;
		cin>>a>>b;
		for(int i = 0;i < len;i++){
			A[a[i] - 'a'] ++ ;
			B[b[i] - 'a'] ++ ;
		}
		int bian = 0;
		bool ans = true;
		for(int i = 0;i < 26;i++){
			if((B[i] - A[i]) % k != 0) {
				ans = false;
//				cout<<1<<" "<<i<<endl;
				break;
			}
			bian += (A[i] - B[i]) / k;
			if(bian < 0) {
				ans = false;
//				cout<<2<<" "<<i<<endl;
				break;
			}
		} 
		if(ans) printf("yes\n");
		else printf("no\n");
	}
	return 0;
}
