#include <iostream>

using namespace std;

int m = 1000;

void showMoneyWithNoParams() {
	m=m/2;
	cout<<m<<endl;
}

void showMoney(int money){
	money=money/2;
	cout<<money<<endl;
}

void showArr(int n, int* arr) {
	
}

int main(int argc, char** argv) {
	showMoneyWithNoParams();
	cout<<m<<endl;
	showMoney(m);
	cout<<m<<endl;
	return 0;
}

/*void func1() {
	int n;
	for (int j = 0;j<n;j++){
			code
			code
			int t;
			code
		}
}

void func2() {
	
}

int main(int argc, char** argv) {
	int n;
	int n; // нельзя
	
	for (int i; i<n;i++){
		code
		int p;
		for (int j = 0;j<n;j++){
			code
			code
			int t;
			code
		}
	}
	
	for (int i; i<n;i++) {
		int t;
		int p;
	}
	int t;
	return 0;
}*/
