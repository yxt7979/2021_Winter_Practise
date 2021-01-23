#include <bits/stdc++.h>
using namespace std;
struct st{
	int x,y;
	bool operator < (const st &a) const{
		return x == a.x ? y < a.y : x < a.x;
	}
};
multiset<st> S;

int main()
{
	int t;
	scanf("%d",&t);
	for(int no = 1;no <= t;no++){
		if(no > 1) cout<<endl;
		int n;
		S.clear();
		scanf("%d",&n);
		printf("Case #%d:\n",no);
		for(int i = 0;i < n;i++){
			st tmp;
			scanf("%d%d",&tmp.x,&tmp.y);
			multiset<st>::iterator it = S.lower_bound(tmp);
			if(it == S.begin() || (--it)->y > tmp.y){
				S.insert(tmp);
				it = S.upper_bound(tmp);
				while(it != S.end() && it->y >= tmp.y) S.erase(it++);
			}
			printf("%d\n",S.size());
		}
	}
}
