#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int a[100005],suml[100005],sumr[100005]; 
int main()
{
	int k=0;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	int max1=0;
	for(int i=2;i<=n;i++)
	{
		if(a[i]>a[i-1])
		suml[i]=suml[i-1]+1;
		max1=max(max1,suml[i]);
	}
	for(int i=n-1;i>=1;i--)
	{
		if(a[i]>a[i+1])
		sumr[i]=sumr[i+1]+1;
		max1=max(max1,sumr[i]);
	}
	for(int i=1;i<=n;i++)
	{
		if(suml[i]==max1||sumr[i]==max1)
		k++;
	}
	if(k>1)
	{
		cout<<0<<endl;
		return 0;
	}
	int sum=0;
	for(int i=2;i<=n-1;i++)
	{
		if(suml[i]>0&&sumr[i]>0&&max(suml[i],sumr[i])>=max1)
		{
			int max2=max(suml[i],sumr[i]);
			int min2=min(suml[i],sumr[i]);
			if(max2==min2)
			{
			    if(min2%2==0)
				{
					sum++;
				}
			}
		}
	}
	cout<<sum;
    return 0;
}
