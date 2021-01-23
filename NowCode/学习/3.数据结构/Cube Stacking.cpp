#include <bits/stdc++.h>
using namespace std;
const int M = 30010;
int f[M];
int height[M];//每个结点下方的结点个数
int size[M];//这个结点所在堆的结点数

int find(int x){
	if(x != f[x]){
		height[x] += height[f[x]];
		f[x] = find(f[x]);
	}
	return f[x];
} 

void merge(int a,int b){
	int fa = find(a);
	int fb = find(b);
	if(fa != fb){
		f[fa] = fb;
		height[fa] = size[fb];
		size[fb] += size[fa];
	}
}

int main()
{
	int n;cin>>n;
	for(int i = 1;i <= M;i++){
		f[i] = i;
		height[i] = 0;
		size[i] = 1;
	}
	while(n--){
		char c;
		cin>>c;
		if(c == 'M'){
			int a,b;
			cin>>a>>b;
			merge(a,b);
		}
		else{
			int a;cin>>a;
			find(a);
			cout<<height[a]<<endl;
		}
	}
}

