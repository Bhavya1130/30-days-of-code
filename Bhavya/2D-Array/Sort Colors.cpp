#include <iostream>
using namespace std;

int main()
{
    int n, counter=1;
    cin >> n;
    int a[n];
    for(int i {}; i<n; i++){
        cin >> a[i];
    }
    while(counter<n){
    for(int i {}; i<n; i++){
        if(a[i]>a[i+1]){
            int temp = a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    counter++;
    }
    for(int i {}; i<n; i++){
        cout << a[i] << " ";
    }

    return 0;
}
