#include <iostream>
using namespace std;
 
int main()
{
    int a, sum =0 ;
    cin >> a;
    int temp;
    temp = a;
    while(a>0){
        sum = sum + (a % 10);
        a = a/10;
    }
    cout << "sum of digits of " << temp << " is: " << sum;
    return 0;
}
