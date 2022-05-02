#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0, x;
    cout << "Enter number of rows: ";
    cin >> n;
    for(int i = 1 ; i < n; i++){
        x = n % i;
        if(x == 0){
            sum = sum + i;
        }
    }
    if(sum == n)
        cout << n << " is a perfect number";
    else
        cout << n << " is not a perfect number";
    return 0;
}
