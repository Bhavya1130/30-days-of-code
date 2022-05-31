#include <iostream>
using namespace std;

int reverse(int n){
    static int a, sum;
    if(n>0){
        a = n%10;
        sum = sum*10 + a;
        reverse(n/10);
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
        cout << reverse(n) << " ";   
    return 0;
}
