#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]) {
	
	ifstream numFile("num1.txt");
	int n;
	int* arr1;
	numFile >> n;
	arr1 = new int[n];
	
	for (int i = 0; i < n; i++){
		numFile >> arr1[i];
	}
	
	for (int i = 0; i < n; i++){
		cout << arr1[i] << ", ";
	}
	return 0;
}
