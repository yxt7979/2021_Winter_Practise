#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	if(k == 0){
		for(int i = 1;i <= n;i++) cout<<i<<" ";
		return 0;
	}
	if(n >= 6){
		if(k == 1){
			cout<<"3 6 1 2 5 4 ";
			for(int i = 7;i <= n;i++) cout<<i<<" ";
			return 0;
		}
		else if(k == 2){
			cout<<"3 6 2 1 5 4 ";
			for(int i = 7;i <= n;i++) cout<<i<<" ";
			return 0;
		}
		else if(k == 3){
			cout<<"3 6 2 4 5 1 ";
			for(int i = 7;i <= n;i++) cout<<i<<" ";
			return 0;
		}
		else{
			bool yong[n+1];
			memset(yong,false,sizeof(yong));
			cout<<"3 6 ";
			yong[3] = true;
			yong[6] = true;
			int ou = 2;
			for(int i = 2;i <= k;i++){
				if(!yong[ou]){
					cout<<ou<<" ";
					yong[ou] = true;
					while(1){
						ou += 2;
						if(!yong[ou]) break;
					}
				}
			}
			for(int i = 1;i <= n;i++){
				if(!yong[i]) cout<<i<<" ";
			}
		}
	}
	else if(n == 2 || n == 3){
		cout<<"-1";
	}
	else if(n == 4){
		if(k == 1) cout<<"2 4 3 1";
		else cout<<"-1";
	}
	else{
		if(k == 1) cout<<"2 4 1 3 5";
		else cout<<"-1";
	}
}
