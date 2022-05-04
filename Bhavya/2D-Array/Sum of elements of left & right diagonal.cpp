#include <iostream>
using namespace std;

int main()
{
    int m, n, rsum=0, lsum=0;
    cout << "Enter number of rows & columns: ";
    cin >> m;
    //cout << "Enter number of columns: ";
    //cin >> n;
    int a[m][m];
    cout << "Enter elements of matrix: \n";
    for(int i {}; i<m; i++){
        for(int j {}; j<m; j++){
            cin >> a[i][j];
        }
    }
    cout << "\nDisplay elements of matrix: \n";
    for(int i {}; i<m; i++){
        for(int j {}; j<m; j++){
            cout << a[i][j];
        }
        cout << endl;
    }
    cout << endl;
    for(int i {}; i<m; i++){
        for(int j {}; j<m; j++){
            if(i == j){
                lsum += a[i][j];
            }
            if((i+j) == m-1){
                rsum += a[i][j];
            }
        }
    }
    cout << "Sum of elements of left diagonal: " <<lsum << endl;
    cout << "Sum of elements of right diagonal: " <<rsum << endl;
    return 0;
}
