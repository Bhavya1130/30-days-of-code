#include <iostream>
using namespace std;

int power(int a, int b){
    int sum =1;
    for(int i {}; i<b; i++){
        sum*=a;
    }
    return sum;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << a << " raised to power " << b << " is: " <<power(a, b);
    return 0;
}
