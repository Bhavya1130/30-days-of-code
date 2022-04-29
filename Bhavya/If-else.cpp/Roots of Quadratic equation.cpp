#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a, b, c, d=0;
    cout << "Enter a, b & c of a Quadratic equation(ax^2 + bx + c) : ";
    cin >> a >> b >> c;
    d = (b*b - 4*a*c);
    if(d > 0){
        cout << "Root 1: " << (float)(-b +sqrt(d))/2*a;
        cout << "\nRoot 1: " << (float)(-b - sqrt(d))/2*a;
    }
   else if(d < 0){
        cout << "Imaginary root 1: " << (float)-b/2*a << " + " << (float)sqrt(-d)/2*a << "i"; 
        cout << "\nImaginary root 2: " << (float)-b/2*a << " - " << (float)sqrt(-d)/2*a << "i";
   }
   else
       cout << "Both roots are equal(+/-): " << (float)b/2*a;
    return 0;
}
