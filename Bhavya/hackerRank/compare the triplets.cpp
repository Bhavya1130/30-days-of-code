#include <iostream>
using namespace std;

int main()
{
    int a[3], b[3], n=0, m=0;
    for(int i {}; i<3; i++){
        cin >> a[i];
    }
    for(int i {}; i<3; i++){
        cin >> b[i];
    }
    for(int i {}; i<3; i++){
        if(a[i]!=b[i]){
            if(a[i]>b[i]){
               n++;
            }
            else if(a[i]<b[i]){
                m++;
            }
        }
    }
    int x[2];
    x[0]=n;
    x[1]=m;
    for(int i {}; i<2; i++){
        cout << x[i] << " ";
    }
    return 0;
}
