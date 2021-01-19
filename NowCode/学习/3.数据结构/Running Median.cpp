//”√∂‘∂•∂—“ªMemoryE 
//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	int t;
//	scanf("%d",&t);
//	while(t--){
//		int no,n;
//		scanf("%d%d",&no,&n);
//		priority_queue<int,vector<int>,less<int>> Q1;
//		priority_queue<int,vector<int>,greater<int>> Q2;
//		printf("%d %d\n",no,n/2 + 1);
//		for(int i = 1;i <= n;i++){
//			int x;scanf("%d",&x);
//			if(i == 1){
//				Q1.push(x);
//				printf("%d ",x);
//			}
//			else{
//				if(x <= Q1.top()){
//					Q1.push(x);
//					if(Q1.size() - Q2.size() > 1){
//						int tmp = Q1.top();
//						Q1.pop();
//						Q2.push(tmp);
//					}
//				}
//				else{
//					Q2.push(x);
//					if(Q2.size() - Q1.size() > 1){
//						int tmp = Q2.top();
//						Q2.pop();
//						Q1.push(tmp);
//					}
//				}
//				if(i % 2 == 1){
//					if(Q1.size() > Q2.size()) printf("%d ",Q1.top());
//					else printf("%d ",Q2.top());
//				}
//				if(i % 20 == 0 && n > i) printf("\n");
//			}
//		}
//		printf("\n");
//	}
//}

#include <bits/stdc++.h>
using namespace std;
vector<int> a;
vector<int> b;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        a.clear();
        b.clear();
        int no,n;
        scanf("%d%d",&no,&n);
        for(int i = 1;i <= n;i++){
            int x;scanf("%d",&x);
            a.insert(upper_bound(a.begin(),a.end(),x),x);
            if(i % 2 == 1){
                b.push_back(a[(i-1)/2]);
            }
        }
        printf("%d %d\n",no,b.size());
        for(int i = 0;i < b.size();i++){
            printf("%d ",b[i]);
            if((i+1) % 10 == 0 && i != b.size() - 1) printf("\n");
        }
        printf("\n");
    }
}
