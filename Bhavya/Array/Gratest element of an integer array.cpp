#include <iostream>
using namespace std;

int main()
{
    int max = 0;
    int n;
    cin >> n;
    int a[n];
    for(int i {}; i< n; i++){
        cin >> a[i];
    }
    for(int i {}; i< n; i++){
        if(a[i]> max){
            max = a[i];
        }
    }
    cout << max;

    return 0;
}
