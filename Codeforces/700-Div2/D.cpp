//求最大的 
#include <bits/stdc++.h>
using namespace std;
const int MaxSize = 100010;

vector<int> Have_ids[MaxSize];
int num[MaxSize];
int ans = 0;
int see[MaxSize];

int main()
{
	int n;
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d",&num[i]);
		Have_ids[num[i]].push_back(i);
	} 
	int one = -1,two = -1;
	for(int i = 0;i < n;i++){
		see[num[i]] ++ ;
		if(one == two){
			if(one != num[i]) ans ++ ;
			one = num[i];
		}
		else if(one == num[i] && two != num[i]){
			two = num[i];
			ans ++ ;
		}
		else if(one != num[i] && two == num[i]){
			one = num[i];
			ans ++ ;
		}
		else{
			int nextone = 0x3f3f3f3f;
			int nexttwo = 0x3f3f3f3f;
//			cout<<one<<" "<<two<<endl;
			if(one >= 0 && see[one] <= Have_ids[one].size() - 1) nextone = Have_ids[one][see[one]];
			if(two >= 0 && see[two] <= Have_ids[two].size() - 1) nexttwo = Have_ids[two][see[two]];
			if(nextone < nexttwo) {
				one = num[i];
				ans ++ ;
			}
			else{
				two = num[i];
				ans ++ ;
			}
		}
	}
	printf("%d",ans);
}
