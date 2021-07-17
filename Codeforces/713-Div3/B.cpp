#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		char M[n][n];
		bool check = true;
		int p1x,p1y,p2x,p2y;
		for(int i = 0;i < n;i++){
			for(int j = 0;j < n;j++){
				cin>>M[i][j];
				if(M[i][j] == '*'){
					if(check){
						p1x = i;
						p1y = j;
						check = false;
					}
					else{
						p2x = i;
						p2y = j;
					}
				}
			}
		}
		int p3x,p3y,p4x,p4y;
		if(p1x == p2x){
			if(p1x == 0){
				p3x = p4x = 1;
				p3y = p1y;
				p4y = p2y;
			}
			else{
				p3x = p4x = p1x - 1;
				p3y = p1y;
				p4y = p2y;
			}
		}
		else if(p1y == p2y){
			if(p1y == 0){
				p3y = p4y = 1;
				p3x = p1x;
				p4x = p2x;
			}
			else{
				p3y = p4y = p1y - 1;
				p3x = p1x;
				p4x = p2x;
			}
		}
		else{
			p3x = p1x;
			p3y = p2y;
			p4x = p2x;
			p4y = p1y;
		}
		for(int i = 0;i < n;i++){
			for(int j = 0;j < n;j++){
				if((i==p1x && j == p1y)||(i==p2x && j == p2y)||(i==p3x && j == p3y)||(i==p4x && j == p4y)){
					cout<<'*';
				}
				else{
					cout<<'.';
				}
			}
			cout<<endl;
		}
	}
	return 0;
}
