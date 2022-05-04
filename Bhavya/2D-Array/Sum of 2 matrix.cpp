#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter number of rows: ";
    cin >> m;
    cout << "Enter number of columns: ";
    cin >> n;
    int a[m][n], b[m][n];
    cout << "Enter elements of first matrix: \n";
    for(int i {}; i<m; i++){
        for(int j {}; j<n; j++){
            cin >> a[i][j];
        }
    }
    cout << "\nDisplay elements of first matrix: \n";
    for(int i {}; i<m; i++){
        for(int j {}; j<n; j++){
            cout << a[i][j];
        }
        cout << endl;
    }
    cout << endl;
    cout << "Enter elements of second matrix: \n";
    for(int i {}; i<m; i++){
        for(int j {}; j<n; j++){
            cin >> b[i][j];
        }
    }
    cout << "\nDisplay elements of second matrix: \n";
    for(int i {}; i<m; i++){
        for(int j {}; j<n; j++){
            cout << b[i][j];
        }
        cout << endl;
    }
    cout << endl;
    cout << "\nDisplay elements of second matrix: \n";
    for(int i {}; i<m; i++){
        for(int j {}; j<n; j++){
            cout << a[i][j] + b[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
