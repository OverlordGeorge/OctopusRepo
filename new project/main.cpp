#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int** readFromFile (string name){
	ifstream file(name.c_str());
	int n, m;
	file >> n >> m;
	int** matr = new int*[n];
	for (int i = 0; i < n; i++){
		matr[i] = new int[m];
	} 
for(int i=0; i<n; i++){
	for(int j=0; j<m; j++){
		file >> matr[i][j]; 
		cout << matr[i][j] << " ";
	}
	cout << endl;
}
return matr;	
}

int main(int argc, char *argv[]) {
	int** matr = readFromFile("project.txt");
	return 0;
}
