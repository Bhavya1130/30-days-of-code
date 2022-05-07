#include <iostream>
using namespace std;

int main()
{
    int m;
    cin >> m;
    int a[m];
    for(int i {}; i<m; i++){
        for(int j=m-i-1; j>0; j--){
            cout << " ";
        }
        for(int j=i+1; j>0; j--){
            cout << "#";
        }
        cout << endl;
    }
    return 0;
}
