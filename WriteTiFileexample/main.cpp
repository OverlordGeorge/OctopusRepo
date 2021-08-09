#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

int main(int argc, char** argv) {
	int a;
	ofstream numberFile("number.txt");
	cout<<"type a number"<<endl;
	cin>>a;
	numberFile << a;
	
	int n = 5;
	int* arr = new int[n];
	ofstream arrayFile("array.txt");
	for (int i =0;i<n;i++){
		arr[i] = rand()%10;
	}
	arrayFile << n << endl;
	for (int i = 0;i< n;i++){
		arrayFile << arr[i] << " ";
	}
	return 0;
}
