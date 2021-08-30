#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]) {
	ifstream readFile("read write.txt");
	int a, b, c;
	readFile >> a >> b >> c;
	cout << a << ", " << b << ", " << c;
	
	int sum = 0;
	sum = a + b + c;
	
	ofstream writeFile ("write.txt");
	writeFile << sum;
	return 0;
}
