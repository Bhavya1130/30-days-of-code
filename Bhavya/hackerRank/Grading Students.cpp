#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i {}; i<n; i++){
        cin >> a[i];
    }
    int x;
    for(int i {}; i<n; i++){
        x = a[i]%5;
        if(a[i]>37){
            if((5-x) < 3){
                a[i]= a[i]+(5-x);
            }
        }
    }
    for(int i {}; i<n; i++){
        cout << a[i] << endl;
    }
    return 0;
}
