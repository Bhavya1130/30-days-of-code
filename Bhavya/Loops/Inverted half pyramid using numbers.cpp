#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    for(int i =n ; i >= 1; i--){
        for(int j = i ; j >= 1; j--){
            cout << (i-j+1);
        }
        cout << endl; 
    }
    return 0;
}
