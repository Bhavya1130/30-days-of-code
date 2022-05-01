#include <iostream>
using namespace std;

int main()
{
    int a, d, n, x=0;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter common difference: ";
    cin >> d;
    cout << "Enter number of terms: ";
    cin >> n;
    for (int i=1; i <= n; i++){
        x = x + a;
        a = a + d;
    }
    cout << "Result of series: " << x;
    return 0;
}
