#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int* readFile(string name){
	ifstream numFile1(name.c_str());
	int n;
	int* arr1;
	numFile1 >> n;
	arr1 = new int[n];
	
	for (int i = 0; i < n; i++){
		numFile1 >> arr1[i];
	}
	return arr1;
}
int main(int argc, char *argv[]) {

	int* arr1 = readFile("num1.txt");
	int* arr2 = readFile("num2.txt");
	
	
	int m = 10;
	int* sum = 0;
	sum = new int[m];
for (int i = 0; i < m; i++){
	sum[i] = arr1[i] + arr2[i];	
	}
cout << sum;

ofstream numFile("numFile1.txt");
numFile << m << endl;

for (int i = 0; i < m; i++){
	numFile << sum[i] << " " ; 
}
	return 0;
}
