#include <iostream>
using namespace std;

int main()
{
    int n, ls, hs, lc=0, hc=0;
    cin >> n;
    int a[n];
    for(int i {}; i<n; i++){
        cin >> a[i];
    }
    ls=a[0];
    hs=a[0];
    for(int i {}; i<n; i++){
        if(a[i]>hs){
            hs=a[i];
            hc++;
        }
        else if(a[i]<ls){
            ls=a[i];
            lc++;
        }
    }
    cout << hc << " " << lc;

    return 0;
}
