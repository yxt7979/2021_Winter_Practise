#include <bits/stdc++.h>
using namespace std; 

int n,k;
int ans = 0;

int M[7];

void dfs(int now,int last,int Mnum){
	if(Mnum == 1){
		ans ++ ;
//		M[0] = last;
//		for(int i = 0;i < k;i++) cout<<M[i]<<" ";
//		cout<<endl;
		return ;
	}
	//不能为空，不能重复
	for(int i = now;i <= last / Mnum;i++){
		M[Mnum - 1] = i;
//		cout<<"dfs("<<i<<","<<last - i<<","<<Mnum - i<<")"<<endl; 
		dfs(i,last - i,Mnum - 1);
		M[Mnum - 1] = 0;
	}
}

int main()
{
	scanf("%d%d",&n,&k);
	dfs(1,n,k);
	printf("%d",ans);
} 
