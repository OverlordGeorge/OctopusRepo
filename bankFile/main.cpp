#include <iostream>
#include <fstream>

using  namespace std;
int readBalance(string name){
	int balance;
	ifstream numFile(name.c_str());
	numFile >> balance;
	numFile.close();
	return balance;
}

void writeFile(string name, int balance){
	ofstream numFile(name.c_str());
	numFile << balance; 
	numFile.close();
	cout << balance ;
}
void menu(int balance){
	cout << "balance = " << balance << endl;
	
cout << "1 - add money" << endl;
cout << "2 - take money" << endl;
cout << "3 - take all money" << endl;
cout << "4 - exit" << endl;
}

int main(int argc, char *argv[]) {
	int balance = readBalance("num.txt");
	
	menu(balance);
	
	int number;
	cin >> number;
	if (number == 1){
		int sum;
	cout << "sum of money - " << endl;
	cin >> sum;
	balance = balance + sum;
	writeFile("num.txt", balance);
	}
	if (number == 2){
	int  take;
	cout << "take num -" << endl;
	cin >> take;
	balance = balance - take;
	writeFile("num.txt", balance);	
	}
	if (number == 3){
	balance = 0;
	writeFile("num.txt", balance);	
	}
	if (number == 4){
		
	}
	return 0;
	
	
}
