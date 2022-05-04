#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter number of rows: ";
    cin >> m;
    cout << "Enter number of columns: ";
    cin >> n;
    int a[m][n];
    cout << "Enter elements of matrix: \n";
    for(int i {}; i<m; i++){
        for(int j {}; j<n; j++){
            cin >> a[i][j];
        }
    }
    cout << "\nDisplay elements of matrix: \n";
    for(int i {}; i<m; i++){
        for(int j {}; j<n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
