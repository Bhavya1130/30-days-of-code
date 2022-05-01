/*         ****
           ****
           ****
           ****                          */
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of rows & column: ";
    cin >> n;
    for (int i {}; i < n; i++){
        for(int j {}; j < n; j++){
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
