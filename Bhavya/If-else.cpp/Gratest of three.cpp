#include <iostream>
using namespace std;

int main()
{
    float a, b, c, d=0;
    cout << "Enter three number: ";
    cin >> a >> b >> c;
    d = a > b ? ( a > c ? a : c) : (b > c ? b : c) ;
    cout << "Largest number: " << d;
    return 0;
}
