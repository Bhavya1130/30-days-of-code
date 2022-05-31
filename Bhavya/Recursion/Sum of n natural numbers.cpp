#include <iostream>
using namespace std;

int sum(int n){
    int a=0;
    if(n>0){
        return (n+sum(n-1));
    }
    else
        return 0;
}

int main()
{
    int n;
    cin >> n;
    cout << sum(n);
    return 0;
}
