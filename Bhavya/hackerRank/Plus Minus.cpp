#include <iostream>
using namespace std;

int main()
{
    int m;
    float p=0, n=0, z=0;
    cin >> m;
    int a[m];
    for(int i {}; i<m; i++){
            cin >> a[i];
    }
    for(int i {}; i<m; i++){
        if(a[i]>0){
            p++;
        }
        else if(a[i]<0){
            n++;
        }
        else
        z++;
    }
    cout << p/m << endl;
    cout << n/m << endl;
    cout << z/m << endl;
    return 0;
}
