#include <iostream>
using namespace std;

int main()
{
    cout << "Enter no. of elements in array: ";
    int p;
    cin >> p;
    int a[p], n;
    cout << "Enter elements: ";
    for(int i {}; i < p; i++){
        cin >> a[i];
    }
    cout << "Enter sum: ";
    cin >> n;
    cout << "Pairs in array which has sum " << n << " : " << endl;
    for(int i {}; i < p; i++){
        for(int j=i+1; j < p; j++){
            if(a[i]+a[j] == n){
                cout << a[i] << " & " << a[j] << endl;
            }
        }
    }
    return 0;
}
