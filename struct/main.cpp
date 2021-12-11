#include <iostream>
#include <stdlib.h>
using namespace std;

struct Information{
	int salary;
	int number;
};

void show (int n, Information* data){
	for(int i = 0; i < n; i++){
		cout << data[i].number << " " << data[i].salary <<endl;
	}
}



int main(int argc, char *argv[]) {
	
	int n = 10;
	Information *data = new Information[n];
	for(int i = 0; i < n; i++){
		data[i].number = i + 1;
		data[i].salary = rand() % 100; 
	}
	show(n, data);
	
	for (int i = 0; i < n; i++){
	data[i].salary *= 1.1;
}

show(n, data);
	return 0;
	
}
