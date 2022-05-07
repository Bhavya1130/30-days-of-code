#include <iostream>
using namespace std;

void miniMaxSum(int a[5]){
    long int minSum=0, maxSum=0;
    int counter=1;
    while(counter<5){
    for(int i {}; i<5-counter; i++){
            if(a[i]>a[i+1]){
                int temp = a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
    }
    counter++;
    }
    for(int i {}; i<4; i++){
        minSum+=a[i];
    }
    for(int i=1; i<5; i++){
        maxSum+=a[i];
    }
    cout << minSum << " " << maxSum;
}
int main()
{
    int a[5];
    for(int i {}; i<5; i++){
        cin >> a[i];
    }
    miniMaxSum(a);
    return 0;
}
