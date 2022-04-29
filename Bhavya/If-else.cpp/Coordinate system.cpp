#include <iostream>
using namespace std;
 
int main()
{
    int x, y;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    if(x > 0 && y > 0)
    cout << "First Quardrant";
    else if(x < 0 && y > 0)
    cout << "Second Quardrant";
    else if(x < 0 && y < 0)
    cout << "Third Quardrant";
    else
    cout << "Forth Quardrant";
    return 0;
}
