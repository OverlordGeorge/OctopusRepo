#include <iostream>
#include <string>
#include <fstream>
using namespace std;

string* readFromFile (string name, int &n)
{
	ifstream file(name.c_str());
	file >> n;
	string* info = new string[n];
	for (int i = 0; i < n; i++){
	file >> info[i];
		
	}
	return info;

	
}
void showInfo(string* arr, int n){
	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
}
int main(int argc, char *argv[]) {
int n = 5;

	string fileName;
	cout << "type file name";
	cin >> fileName;
	string* information = readFromFile(fileName, n);
	showInfo(information, n);
	return 0;
}
