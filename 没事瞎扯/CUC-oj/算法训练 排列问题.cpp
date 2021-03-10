#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	vector<int> cannot[n];
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			int x;
			scanf("%d",&x);
			if(i != j && x == 0) cannot[i].push_back(j);
		}
	}
//	for(int i = 0;i < n;i++) {
//		cout<<i<<":";
//		for(int j = 0;j < cannot[i].size();j++) cout<<cannot[i][j]<<" ";
//		cout<<endl;
//	}
	int num[n];
	for(int i = 0;i < n;i++) num[i] = i;
	vector<string> Ans;
	do{
		bool can = true;
		for(int i = 1;i < n;i++){
			for(int j = 0;j < cannot[num[i-1]].size();j++){
				if(num[i] == cannot[num[i-1]][j]) {
					can = false;
					break;
				}
			}
			if(!can) break;
		}
		if(can){
			string tmp;
			for(int i = 0;i < n;i++){
				tmp += num[i] + '0';
			}
			Ans.push_back(tmp);
		}
	}while(next_permutation(num,num+n));
	sort(Ans.begin(),Ans.end());
	for(int i = 0;i < n;i++) cout<<Ans[k-1][i]<<" ";
}
