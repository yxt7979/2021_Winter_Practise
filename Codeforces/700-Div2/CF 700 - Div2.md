# CF 700 - Div2

## C

交互题，太好玩了吧

这个利用了二分的方法，每次找mid和mid+1,看两者的大小关系，再缩小范围，知道left == right。

读入的时候要用到`fflush`

```c++
#include <bits/stdc++.h>
using namespace std;

int a,b;

void getnum(int pos1,int pos2){
	cout<<"? "<<pos1<<endl;
	fflush(stdout);
	cin>>a;
	cout<<"? "<<pos2<<endl;
	fflush(stdout);
	cin>>b;
}

int main(){
	int n;
	scanf("%d",&n);
	int l = 1;
	int r = n;
	while(l < r){
		int mid = l + (r - l) / 2;
		getnum(mid,mid + 1);
		if(a > b) l = mid+ 1;
		else r = mid;
	}
	cout<<"! "<<l<<endl;
	return 0;
} 

```

## D1

求分开的最大的

这里令one是Array1最后的数，two是Array2最后的数：

```c++
if(one == two) 放在哪里都一样;
else if(one == num[i] && two != num[i]) 放在Array2后面ans++;
else if(one != num[i] && two == num[i]) 放在Array1后面ans++;
else{
    nextone : one下一次出现的位置;
    nexttwo : two下一次出现的位置;
    if(nextone < nexttwo) 放在Array1后面ans++;
    else 放在Array2后面ans++;
}
```

## D2

求最小的，改改即可

