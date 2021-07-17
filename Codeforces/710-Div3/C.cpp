#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		string a,b;
		cin>>a>>b;
		int nowlen = 0;
		for(int i = 0;i < a.length();i++){
			for(int j = 0;j < b.length();j++){
				int pos = i;
				if(b[j] == a[i]){
					int tmplen = 1;
					for(int k = j+1;k < b.length();k++){
						if(b[k] == a[++pos]) tmplen ++ ;
						else break;
					}
					nowlen = max(nowlen,tmplen);
				}
			}
		}
		printf("%d\n",a.length() + b.length() - nowlen * 2);
	}
}

/*
3e333
3w43e
*/
