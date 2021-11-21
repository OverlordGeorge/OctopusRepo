#include <iostream>
#include <fstream>
using namespace std;

int* ReadFromFile(int &n,  string fileName){
ifstream numbersFile(fileName.c_str());
numbersFile >> n;
int* numbers = new int[n];
for (int i = 0; i < n; i++){
	numbersFile >> numbers[i];
}
return numbers;
}

int calculation(int n, int* numbers){
	int sum =  0;
	for(int i = 0; i < n; i++){
		sum = sum + numbers[i];
	}
	return sum;
}

int main(int argc, char *argv[]) {
	int n;
	int* numbers = ReadFromFile(n, "num1.txt");
	int amount = calculation(n, numbers);
	cout << amount;
	return 0;
}
