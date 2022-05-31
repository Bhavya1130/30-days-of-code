#include <iostream>
using namespace std;

int series(int n){
    
    if(n==0){
        return(0);
    }
    if(n==1){
        return(1);
    }
    else
        return (series(n-1)+series(n-2));
}

int main()
{
    int n;
    cin >> n;
    for(int i {}; i<n; i++){
        cout << series(i);
    }
    return 0;
}
