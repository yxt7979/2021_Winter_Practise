#include<cstdio>
#include<cstring>
#include<cmath>
#include<string>
#include<vector>
#include<iostream>
using namespace std;
 
int team[70][70];	//��ʾ�����i�Ѿ���ս���Ķ��� 
int cur[70];		//��ʾ��ǰ�Ѿ���ս���Ķ���
int op[35][2];
int n; 
 
int main()
{
	cin >> n;
	
	int num = pow(2,n);
	memset(team,0,sizeof(team));
	for(int i=1; i<=num-1; i++)	//��ʾ��i������ 
	{
		memset(cur,0,sizeof(cur));
		memset(op,0,sizeof(op));
		
		int t = 0;
		 
		for(int j=1; j<=num; j++)	//��ʾ��j֧���� 
		{
			if (cur[j] == 0)	//�����֧����û�ж��֣���� 
			{
				cur[j] = 1;
				for(int k=1; k<=num; k++)	//k��ʾ��ԵĶ��� 
				{
					if (j == k || cur[k] == 1)	//�������k�Ѿ������������������� 
						continue;
					if (team[j][k] == 0 && cur[k] == 0)	//�������j��kû�ж�ս������� 
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
