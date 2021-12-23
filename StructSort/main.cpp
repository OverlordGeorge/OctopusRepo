#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

struct Student {
	int age;
	string name;
};

Student* sortByAge(Student* students, int n) {
	for (int i=0;i<n;i++) {
		for (int j = 0; j<n - 1; j++){
			if (students[j].age > students[j+1].age){
				Student tempSt;
				tempSt.age = students[j].age;
				tempSt.name = students[j].name;
				students[j].age = students[j+1].age;
				students[j].name = students[j+1].name;
				students[j+1].age = tempSt.age;
				students[j+1].name = tempSt.name;
			}
		}
	}
	return students;
}

Student* readFromFile(string filename, int &n){
	ifstream file(filename.c_str());
	file>>n;
	Student* students = new Student[n];
	for (int i = 0; i<n;i++) {
		file>>students[i].age>>students[i].name;
	}
	return students;
}

void showStudents(Student* students, int n) {
	for (int i=0;i<n;i++) {
		cout<<students[i].name<<" "<<students[i].age<<endl;
	}
}

int main(int argc, char** argv) {
	int n, m;
	Student* classA;
	Student* classB;
	cout<<"class A"<<endl;
	classA = readFromFile("classA.txt", n);
	showStudents(classA, n);
	cout<<endl<<"class B"<<endl;
	classB = readFromFile("classB.txt", m);
	showStudents(classB, m);
	cout<<endl<<"class A after sorting"<<endl;
	classA = sortByAge(classA, n);
	showStudents(classA, n);
	return 0;
}
