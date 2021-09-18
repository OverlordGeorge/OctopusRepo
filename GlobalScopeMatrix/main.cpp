#include <iostream>
#include <stdlib.h>
using namespace std;

int n;
int *arr;

int* randomizeArr(int m){
	int *array = new int[m];
	for (int i=0;i<m;i++){
		array[i] = rand()%10;
	}
	return array;
}

/*void showArr(int m, int* array) {
	for (int i=0;i<m;i++){
	 	cout<<array[i]<<" ";
	 }
}*/
void showArr() {
	for (int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

int main(int argc, char** argv) {
	cout<<"type array length"<<endl;
	cin>>n;
	arr = randomizeArr(n);
	showArr();
	return 0;
}
