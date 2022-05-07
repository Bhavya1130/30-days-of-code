#include <iostream>
using namespace std;

int main()
{
    int n, counter=1;
    cout << "Number of elements in array: ";
    cin >> n;
    int a[n];
    cout << "Enter elements of array: ";
    for(int i {}; i<n; i++){
        cin >> a[i];
    }
    int num;
    cout << "Enter target: ";
    cin >> num;
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
    cout << "Target is at following indices after sorting: \n";
    for(int i {}; i<n; i++){
        if(a[i]==num)
        cout << i << " ";
    }
    //cout<<"Hello World";

    return 0;
}
