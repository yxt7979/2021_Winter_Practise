#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string s;
int N,K;

ll Num(int left,int right){
	int mod = 1;
	ll ans = 0;
	for(int i = right;i >= left;i--){
		ans += mod * (s[i] - '0');
		mod *= 10;
	}
//	cout<<ans<<endl;
	return ans;
}

int main()
{
	scanf("%d%d",&N,&K);
	cin>>s;
	int n = s.length();
	ll dp[N][K+1];
	memset(dp,0,sizeof(dp));
	for(int i = 0;i < N;i++) dp[i][0] = Num(0,i);
	for(int i = 1;i < N;i++){
		for(int j = 1;j <= i && j <= K;j++){
			for(int m = j-1;m <= i;m++){
//				if(i == N-1 && j == K) cout<<"aaaa"<<dp[i][j]<<endl;
				dp[i][j] = max(dp[i][j],dp[m][j-1] * Num(m + 1,i));
//				if(i == N-1 && j == K) cout<<m<<"aaaa"<<dp[i][j]<<endl;
			}
		}
	}
	printf("%lld",dp[N-1][K]);
}
