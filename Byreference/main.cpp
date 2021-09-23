#include <iostream>

using namespace std;

int multiple(int a) {
	a = a * 10;
	return a;
}

void multipelReference(int &a) {
	a = a*10;
}

int main(int argc, char** argv) {
	
	//normal way
	int num1 = 120;
	num1 = multiple(num1);
	cout<<num1<<endl;
	
	//by refence
	int num2 = 200;
	multipelReference(num2);
	cout<<num2<<endl;
	return 0;
}
