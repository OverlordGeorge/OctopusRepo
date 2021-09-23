#include <iostream>

using namespace std;

void sumOfNum(int &a, int &b, int &c){
	int num4 = c;
	int num5 = a;
	c = a + b;	
	a = b - num4;
    b = num5 * b * num4;
}


int main(int argc, char *argv[]) {
	int num1 = 3;
	int num2 = 9;
	int num3 = 2;

	sumOfNum(num1, num2, num3);
	cout << num1 << " " << num2 << " " << num3 ;
	 
	return 0;
}
