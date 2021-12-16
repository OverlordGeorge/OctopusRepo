#include <iostream>
#include <fstream>

using namespace std;

string* readFromFile(string filename, int &n){
	ifstream file(filename.c_str());
	file>>n;
	string* names = new string[n];
	for (int i = 0;i<n;i++) {
		file>>names[i];
	}
	return names;
}

void printNames(string* names, int n) {
	for (int i=0; i<n; i++){
		cout<<names[i]<<" ";
	}
	cout<<endl;
}

int main(int argc, char** argv) {
	int n, m;
	string* namesA = readFromFile("classA.txt", n);
	printNames(namesA, n);
	string* namesB = readFromFile("classB.txt", m);
	printNames(namesB, m);
	return 0;
}
