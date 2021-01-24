#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int num[9] = {1,2,3,4,5,6,7,8,9};

int getnum(int left,int right){
	int ans = 0;
	int mod = 1;
	while(left <= right){
		ans += num[right] * mod;
		mod *= 10;
		right --;
	}
	return ans;
}

int main()
{
	ll n,ans = 0;
	scanf("%lld",&n);
	do{
//		for(int i = 0;i < 9;i++) cout<<num[i]<<" ";
		for(int i = 0;i < 7;i++){
			for(int j = i+1;j < 8;j++){
				int a = getnum(0,i);
				int b = getnum(i+1,j);
				int c = getnum(j+1,8);
//				cout<<a<<" "<<b<<" "<<c<<endl;
				if(a + b * 1.0/c == n) ans ++ ;
			}
		}
	}while(next_permutation(num,num + 9));
	printf("%d",ans);
}
