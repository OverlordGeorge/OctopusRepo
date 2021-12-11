#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;
struct Product{
	string product;
	int price;
};

Product* productRead(string name, int &n){
	ifstream product_file(name.c_str());
	product_file >> n;
	Product* things;
	things = new Product[n];
	for (int i = 0; i < n; i++){
		product_file >> things[i].price >> things[i].product;
		
	}
	return things;
}

void show (int n, Product* things){
for (int i = 0; i < n; i++){
	cout << things[i].price << " " << things[i].product << endl;
}	
}
int sum (int n, Product* things){
	int sumOfProd = 0;
	for (int i = 0; i < n; i++){
	sumOfProd = things[i].price + sumOfProd; 	
	}
	return sumOfProd;
}

int main(int argc, char *argv[]) {
	int n;
 
	Product* info = productRead("products.txt", n);
	show (n, info);
	int summ = sum (n, info);
	cout << summ;
	return 0;
}
