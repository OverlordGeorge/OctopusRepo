#include <iostream>
#include <fstream>

using namespace std;
int main(int argc, char *argv[]) {
	ifstream numbers("file.txt");
	int a,b,c;
	numbers >> a >> b;
	c = a*b;
	cout << c << endl;
	
	ifstream arr ("arr.txt");
	int n;
	int* array;
	arr >> n;
	array = new int[n];
	for (int i = 0; i < n; i++){
		arr >> array[i];
	}
	int sum = 0;
	for (int i = 0;i < n; i++){
	sum = sum + array[i];	
	}
	cout << sum;
	return 0;
}
