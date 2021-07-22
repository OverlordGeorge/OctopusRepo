#include <iostream>

using namespace std;

void discriminant(float a, float b, float c){
    float d = b*b - 4*a*c;
    if (d < 0)
    {
      cout << "no answer";  
    }
    else 
    {
        float x1 = (-b - sqrt(d) /2*a);
        float x2 = (-b + sqrt(d) /2*a);
        
        cout << "discriminant = " << d;
        cout << "x1 = " << x1;
        cout << "x2 = " << x2;
    }
}

int main()
{

}