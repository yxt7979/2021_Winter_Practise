#include <bits/stdc++.h>
using namespace std;

const int MaxLen = 10;
const int base = 10000; //4位压位 
const int power = 4;

const int MaxSize = 88;

class num{
	public:
		int a[MaxLen];
		num(){
			memset(a,0,sizeof(a));
		}
		num operator = (int b){
			a[0] = 0;
			while(b){
				a[0] ++ ;
				a[a[0]] = b % base;
				b /= base;
			}
			return *this;
		}
		
		void print(){
			printf("%d",a[a[0]]);
			for(int i = a[0]-1;i > 0;i--){
				printf("%0*d",power,a[i]);
				//一定要输出4位（因为不是首个4位数了），不够4位用0补 !!
			}
		}
		
		num operator + (const int &b){
			a[1] += b;
			int i = 1;
			while(a[i] >= base){
				a[i+1] += a[i] / base;
				a[i] %= base;
				i++;
			}
			if(a[a[0] + 1] != 0) a[0] ++ ;
			return *this;
		}
		
		num operator + (const num &b){
			num c;
			c.a[0] = max(a[0],b.a[0]);
			for(int i = 1;i <= c.a[0];i++){
				c.a[i] += a[i] + b.a[i];
				c.a[i+1] += c.a[i] / base;
				c.a[i] %= base; 
			}
			if(c.a[a[0] + 1] != 0) c.a[0] ++ ;
			return c;
		}
		
		bool operator < (const num &b) const{
			if(a[0] < b.a[0]) return true;
			if(a[0] > b.a[0]) return false;
			for(int i = a[0];i >= 1;i--){
				if(a[i] != b.a[i]) return a[i] < b.a[i];
			}
			return false; // 还剩==的情况 
		}
};
int main()
{
	num A;
	A.a[0] = 3;
	A.a[1] = 2341;
	A.a[2] = 23;
	A.a[3] = 34;
	A.print();
}
