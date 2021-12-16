#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;
/*
hard example for future
struct Student {
	string name;
	int age;
};

struct Teacher {
	string name;
	int salary;
};

struct Clas {
	int num;
	Student* students;
	Teacher teacher;
	int level;
};
*/
struct Clas {
	int num;
	string* students;
	string teacher;
	int level;	
};

Clas* readFromFile(string filename, int &n){
	ifstream file(filename.c_str());
	file>>n;
	Clas* classes = new Clas[n];
	for (int i = 0; i<n;i++) {
		int num;
		file >> num;  //write amount of students
		classes[i].num = num;
		classes[i].students = new string[num];  //prepare array of students 
		for (int j=0;j<num; j++) { //write students
			file>>classes[i].students[j]; 
		}
		file >> classes[i].teacher;  // write teacher
		file >> classes[i].level;  //write level
	}
	return classes;
}

void showClasses(Clas* classes, int n) {
	for (int i=0;i<n;i++) {
		cout<<"teacher: "<<classes[i].teacher<<endl;
		cout<<"level: "<<classes[i].level<<endl;
		cout<<"students: "<<endl;
		for (int j=0; j<classes[i].num; j++){
			cout<<classes[i].students[j]<<" ";
		}
		cout<<endl<<endl;
	}
}

int main(int argc, char** argv) {
	int n, m;
	Clas *schoolA, *schoolB;
	cout<<"schoolA"<<endl;
	schoolA = readFromFile("schoolA.txt", n);
	showClasses(schoolA, n);
	cout<<"schoolB"<<endl;
	schoolB = readFromFile("schoolB.txt", m);
	showClasses(schoolB, m);
	return 0;
}
