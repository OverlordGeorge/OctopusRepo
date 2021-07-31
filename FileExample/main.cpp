#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
	
	//��� ��������� ����� �� ����
	ifstream numbersFile("numbers.txt");
	int a,b;
	numbersFile >> a >> b;
	cout<<a<<endl;
	cout<<b<<endl;
	
	//��� ��������� ������ �� �����
	ifstream arrayFile("array.txt");
	int n;
	int* arr;
	arrayFile >> n;
	arr = new int[n];
	for (int i = 0;i<n;i++){
		arrayFile >> arr[i];
	} 
	for (int i=0; i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	//��� ��������� ������
	ifstream strFile("str.txt");
	string firstName, lastName;
	int age;
	strFile >> firstName >> lastName >> age;
	cout<< firstName << " "<< lastName <<" "<< age <<endl;
	
	//��� ������� ������ �����
	ifstream strArr("strArray.txt");
	int m;
	string* strs;
	strArr >> m;
	strs = new string[m];
	for (int i = 0;i<m;i++){
		strArr >> strs[i];
	} 
	for (int i=0; i<m;i++){
		cout<<strs[i]<<" ";
	}
	return 0;
}
