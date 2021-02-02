#include<iostream>
using namespace std;
int get(int num) {
	int num1 = num;
	int num2 =0;
	while (num1  > 0) {
		num2 = 10*num2+(num1 % 10);
		num1 = num1 / 10;
	}
	if (num == num2)
		return 1;
	else
		return 0;
}

int main() {
	
	for (int i = 1000; i <= 9999; i++) {
		if (get(i) == 1 ) {
			cout << i <<endl ;
		}
	}
	return 0;
}




