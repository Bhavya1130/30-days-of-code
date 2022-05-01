#include <iostream>
using namespace std;

int main()
{
    int a, x=1;
    cin >> a;
    for (int i=1; i <= a; i++){
        x *= i;
    }
    cout << "Factorial of "<< a << ": " <<x;
    return 0;
}
