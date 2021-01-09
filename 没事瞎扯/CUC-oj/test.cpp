#include <bits/stdc++.h>
using namespace std;

const int MaxLen = 10;
const int base = 10000; //4位压位 
const int power = 4;

const int MaxSize = 88;

struct num
{
    int a[10];
    
    num()
    {
         memset(a,0,sizeof(a));
    }
    
//    num operator + (const num &b)
//    {
//        num c;
//        c.a[0]=max(a[0],b.a[0]);
//        for (int i=1;i<=c.a[0];i++)
//        {
//            c.a[i]+=a[i]+b.a[i];
//            c.a[i+1]+=c.a[i]/base;
//            c.a[i]=c.a[i]%base;
//        }
//        if (c.a[c.a[0]+1])++c.a[0];  
//        return c; 
//    }
		num operator + (const num &b){
			num c;
			c.a[0] = max(a[0],b.a[0]);
			for(int i = 1;i <= c.a[0];i++){
				c.a[i] += a[i] + b.a[i];
				c.a[i+1] = c.a[i] / base;
				c.a[i] %= base; 
			}
			if(c.a[a[0] + 1] != 0) c.a[0] ++ ;
			return c;
		}
    
    num operator + (const int &b)//this->都可以省略 
    {
        a[1]+=b;
        int i=1;
        while (a[i]>=base)
        {
            a[i+1]=a[i]/base;
            a[i]%=base;
            i++;
        }
        if (a[a[0]+1])a[0]++;  
        return *this;
    }
    
    num operator = (int b)
    {
        a[0]=0;
        while (b)
        {
            a[0]++;
            a[a[0]]=b%base;
            b/=base;
        }
        return *this;
    }
    
    bool operator < (const num &b)const//必须加const 
    {
        if (a[0] < b.a[0]) return true;  
        if (a[0] > b.a[0]) return false;  
        for (int i = a[0];i > 0;--i)  
        {  
            if (a[i] != b.a[i]) return a[i] < b.a[i];  
        }  
        return false;  
    }
    
    void print()
    {
        printf("%d", a[ a[0] ]);        
        //先打印最高位，为了压位 或者 该高精度数为0 考虑  
        for (int i = a[0]-1;i > 0;--i)  
        printf("%0*d", power, a[i]);    
        //这里"%0*d", power的意思是，必须输出power位，不够则前面用0补足  
        printf("\n"); 
    }
    
};

int main()
{
	int n,m;
	num ans;
	num check[MaxSize][MaxSize];
	
	scanf("%d%d",&n,&m);
	for(int j = 0;j < n;j++){
		int a[m];
		for(int i = 0;i < m;i++){
			scanf("%d",&a[i]);
		}
		for(int i = 0;i < m;i++){
			check[i][i] = a[i];
		}
		for(int i = 1;i <= m-1;i++){	//区间长度 
			for(int q = 0;q < m-i;q++){	//start
				int end = q + i;
				check[q][end] = max(check[q+1][end] + check[q+1][end] + a[q],check[q][end-1] + check[q][end-1] + a[end]);
			}
		}
		ans = check[0][m-1] + ans;
		ans = check[0][m-1] + ans;
	}
	ans.print();
	return 0;
}
