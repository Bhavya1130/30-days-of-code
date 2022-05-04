#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Number of rows and columns must be odd\n";
    cout << "Enter number of rows: ";
    cin >> m;
    cout << "Enter number of columns: ";
    cin >> n;
    if((m%2)==0 || (n%2)==0){
        cout << "Wrong input";
        return 0;
    }
    else{
        
    int a[m][n];
    cout << "Enter elements of matrix: \n";
    for(int i {}; i<m; i++){
        for(int j {}; j<n; j++){
            cin >> a[i][j];
        }
    }
    cout << "Elements of matrix: \n";
    for(int i {}; i<m; i++){
        for(int j {}; j<n; j++){
            cout << a[i][j];
        }
        cout << endl;
    }
    cout << "\nElements of Middle Row: \n";
    for(int i = m/2; i<=m/2 ; i++ ){
        for(int j {}; j<n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\nElements of Middle Column: \n";
    for(int j = n/2; j<=n/2 ; j++ ){
        for(int i {}; i<m; i++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
    }
}
