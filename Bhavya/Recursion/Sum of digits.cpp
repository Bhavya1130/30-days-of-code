#include <iostream>
using namespace std;

int reverse(int n){
    if(n>0){
        return (((n%10))+reverse(n/10));
    }
    else
    return 0;
}
int main()
{
    int n;
    cin >> n;
    cout << reverse(n);
    return 0;
}
