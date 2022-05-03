#include <iostream>
using namespace std;

int main()
{
    int a, b, c, rev = 0;
    cin >> a; 
    b = a;
    while(a > 0){
        c = a%10;
        a = a/10;
        rev = rev*10 + c;
    }
    cout << rev;
    return 0;
}
