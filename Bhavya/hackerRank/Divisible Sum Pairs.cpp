#include <iostream>
using namespace std;

int main()
{
    int n, k, x=0;
    cin >> n >> k;
    int a[n];
    
    for(int i {}; i<n; i++){
        cin >> a[i];
    }
    for(int i {}; i<n; i++){
        for(int j=i+1; j<n; j++){
            int temp=(a[i]+a[j]);
            if((temp%k)==0){
                x++;
            }
        }
    }
    cout << x;
    return 0;
}
