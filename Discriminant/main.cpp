#include <iostream>
#include <math.h>

using namespace std;

float Descriminant(float a, float b, float c) {
	float d = b*b - 4 *a *c;
	return d;
}

void calcX1X2(float a, float b, float d) {
	float x1 = ((-1)*b + sqrt(d))/(2*a);
	float x2 = ((-1)*b - sqrt(d))/(2*a);
	cout<<"x1 = "<<x1<<endl;
	cout<<"x2 = "<<x2<<endl;
}

void calcX(float a, float b) {
	float x = ((-1)*b)/(2*a);
	cout<<"x = "<<x<<endl;
}

void noRoots() {
	cout<<"no roots"<<endl;
}

void solveEquation() {
	float a,b,c;
	cout<<"type a, b and c: "<<endl;
	cin>>a>>b>>c;
	float d = Descriminant(a,b,c);
	if (d>0){
		calcX1X2(a,b,d);
	}
	if (d==0){
		calcX(a,b);
	}
	if (d<0){
		noRoots();
	}
}

int main(int argc, char** argv) {
	solveEquation();
	return 0;
}
