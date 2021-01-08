#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin>>n;
    while(n--){
        int len;
        cin>>len;
        if(len == 1) printf("9\n");
        else if(len == 2) printf("98\n");
        else{
        	printf("98");
        	int start = 9;
	        printf("%d",start);
	        for(int i = 1;i < len-2;i++){
	            start = start + 1;
	            if(start == 10) start = 0;
	            printf("%d",start);
	        }
	        printf("\n");
		}
    }
}
