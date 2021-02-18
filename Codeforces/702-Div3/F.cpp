#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		map<int,int> M;
		scanf("%d",&n);
		int num[n];
		for(int i = 0;i < n;i++){
			scanf("%d",&num[i]);
			M[num[i]] ++ ;
		}
		vector<int> ans;
		for(int i = 0;i < n;i++){
			if(M[num[i]]){
				ans.push_back(M[num[i]]);
				M[num[i]] = 0;
			}
		}
		sort(ans.begin(),ans.end());
		int res = 2e9;
		for(int i = 0;i < ans.size();i++){
			res = min(res,n - ans[i] * (int)(ans.size() - i));
		}
		printf("%d\n",res);
	}
}
