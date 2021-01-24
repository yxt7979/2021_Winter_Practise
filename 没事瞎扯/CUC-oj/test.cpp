#include <iostream>
#include <algorithm>
using namespace std;
int n;	// n表示序列中数的个数
int a[9] = {1,2,3,4,5,6,7,8,9};
int main() 
{
	do
	{
		for (int i = 0; i < 9; i++)  // 打印
			cout << a[i] << " ";
		cout << endl;
	}while (next_permutation(a, a + 9));
	return 0;
}

