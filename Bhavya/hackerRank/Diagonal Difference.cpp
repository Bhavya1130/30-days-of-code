#include <iostream>
using namespace std;

int main()
{
    int m, rsum=0, lsum=0;
    cin >> m;
    int a[m][m];
    for(int i {}; i<m; i++){
        for(int j {}; j<m; j++){
            cin >> a[i][j];
        }
    }
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
    if(lsum>rsum){
        cout << lsum-rsum;
    }
    else 
    cout << rsum-lsum;
    return 0;
}
