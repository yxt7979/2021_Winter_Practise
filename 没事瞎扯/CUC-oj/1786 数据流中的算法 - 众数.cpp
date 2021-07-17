#include <bits/stdc++.h>
using namespace std;

struct node{
	int id,cnt;
	bool operator<(const node&u)const {  
        return cnt==u.cnt ? id<u.id:cnt>u.cnt;  
    }  
};

//ÊäÈëÊä³ö¹Ò£© 
int read()
{
    char ch=' ';
    int ans=0;
    while(ch<'0' || ch>'9')
        ch=getchar();
    while(ch<='9' && ch>='0')
    {
        ans=ans*10+ch-'0';
        ch=getchar();
    }
    return ans;
}
void out(int a)
{
    if(a > 9)
    {
        out(a/10);
    }
    putchar(a%10 + '0');
}

int main()
{
	int n,k;
	n = read();
	k = read();
	queue<int> Que;
	map<int,int> M;
	set<node> S;
	for(int i = 0;i < n;i++){
		int nod;
		nod = read();
		if(nod == 1){
			int now;
			now = read();
			M[now] ++ ;
			S.insert((node){
				now,M[now]
			});
			if(Que.size() == k){
				S.erase(S.find((node){
					Que.front(),M[Que.front()]
				}));
				M[Que.front()] -- ;
				if(M[Que.front()]){
					S.insert((node){
						Que.front(),M[Que.front()]
					});
				}
				Que.pop();
			}
			Que.push(now);
		}
		else{
			auto it = S.begin();
			out((*it).id);
			putchar('\n');
		}
	}
}
