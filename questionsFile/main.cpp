#include <iostream>
#include <fstream>

using namespace std;

string* readFromFile(string name,int n){
	string* info = new string[n];
	ifstream readFile(name.c_str());
	for (int i = 0; i < n; i++){
		
	readFile >> info[i];
}
	return info;

}

int main(int argc, char *argv[]) {
	ifstream sizeFile("size.txt");
	int n;
	sizeFile >> n;
	
		string* questions = readFromFile("questions.txt", n);
		string* answers = readFromFile("answers.txt", n);
		
		int score = 0;
		for (int i = 0; i < n; i++){
			string answer;
			cout << questions[i] << endl;
			cout << "write answer" << endl;
			cin >> answer;
			
			if (answer == answers[i]){
			score = score + 1;	
			}
		}
		cout << score ;
	return 0;
	
}
