#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i = 0;i < n;i++){
		int tmp = i;
		int cnt = 0;
		while(tmp && cnt < m){
			cout<<char('A'+tmp);
			tmp -- ;
			cnt ++ ;
		}
		if(cnt < m){
			for(int j = 0;j < m - cnt;j++){
				cout<<char('A' + j);
			}
		}
		cout<<endl;
	}
}
