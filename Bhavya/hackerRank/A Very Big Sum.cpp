#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    long int sum=0;
    for(int i {}; i<n; i++){
        cin >> a[i];
    }
    for(int i {}; i<n; i++){
        sum += a[i];
    }
    cout << sum;
    return 0;
}
