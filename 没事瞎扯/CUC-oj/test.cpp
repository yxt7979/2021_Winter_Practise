#include<cstdio>
#include<cstring>
#include<cmath>
#include<string>
#include<vector>
#include<iostream>
using namespace std;
 
int team[70][70];	//表示与队伍i已经对战过的队伍 
int cur[70];		//表示当前已经对战过的队伍
int op[35][2];
int n; 
 
int main()
{
	cin >> n;
	
	int num = pow(2,n);
	memset(team,0,sizeof(team));
	for(int i=1; i<=num-1; i++)	//表示第i场比赛 
	{
		memset(cur,0,sizeof(cur));
		memset(op,0,sizeof(op));
		
		int t = 0;
		 
		for(int j=1; j<=num; j++)	//表示第j支队伍 
		{
			if (cur[j] == 0)	//如果这支队伍没有对手，配对 
			{
				cur[j] = 1;
				for(int k=1; k<=num; k++)	//k表示配对的对手 
				{
					if (j == k || cur[k] == 1)	//如果队伍k已经参与其他比赛，跳过 
						continue;
					if (team[j][k] == 0 && cur[k] == 0)	//如果队伍j与k没有对战过，配对 
					{
						team[j][k] = 1;
						cur[k] = 1;
						op[t][0] = j;
						op[t++][1] = k;
						break;
					}
				}
			}
		}
		printf("<%d>",i);
		for(int i=0; i<t; i++)
			printf("%d-%d%c",op[i][0],op[i][1],i==t-1?10:32);
	}
	return 0;
}
