#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter 2 Number: ";
    cin >> a >> b;
    
    // Arithematical Operators (+, -, *, /, %, ++, --)
    
    cout << "\nSum: " << a + b;
    cout << "\nDifference: " << a - b;
    cout << "\nProduct: " << a * b;
    cout << "\nQuotient: " << (float)a/b;
    cout << "\nRemainder: " << a%b;
    cout << "\nIncrement in first num: " << ++a;
    cout << "\nDecrement in second num: " << --b;
    
   // Relational Operators (==, >= , <=)
   
    if(a==b)
        cout << "\n\nNum1 equal to num2" << endl;
    else if(a>=b)
        cout << "\n\nNum1 is greater than num2" << endl;
    else if(a<=b)
        cout << "\n\nNum1 is less than num2" << endl;
        
    // Bitwise Operators (&, |, ^, ~, <<, >>)
    
    cout << "\nAND: " << (a&b);
    cout << "\nOR: " << (a|b);
    cout << "\nXOR: " << (a^b);
    cout << "\nNOT: " << (~a);
    cout << "\nLeft shift: " << (a<<1);
    cout << "\nRight shift: " << (a>>b);
    return 0;
}
