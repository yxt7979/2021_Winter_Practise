//1. 刚学的dp :D 
#include <bits/stdc++.h>
using namespace std;
const int MaxSize = 1e6 + 10;
int dp[MaxSize] = {0};
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int sum = a + b;
	a = sum - max(a,b);
	b = sum - a;
	int ans = 0;
	dp[a] = 1;
	for(int i = a + 1;i < MaxSize;i++){
		if(i < b) dp[i] = dp[i-a];
		else if(i > b) dp[i] = dp[i-a] || dp[i-b];
		else dp[i] = 1;
		if(dp[i] == 0) ans = i; 
	}
	printf("%d",ans);
} 

//2. 数学推导
//```python
//a,b = map(int,input().split())
//print(a * b - a - b)
//``` 

//3. 我的暴力做法 23333
//#include <bits/stdc++.h>
//using namespace std;
//const int MaxSize = 1e6 + 10;
//int main()
//{
//	int a,b;
//	scanf("%d%d",&a,&b);
//	int ans = 0;
//	for(int i = MaxSize;i >= max(a,b);i--){
//		bool can = false;
//		for(int j = 0;j <= i / b;j++){
//			if((i - b * j)%a == 0) {
//				can = true;
//				break;
//			}
//		}
//		if(!can) {
//			ans = i;
//			break;
//		}
//	}
//	printf("%d",ans);
//}
