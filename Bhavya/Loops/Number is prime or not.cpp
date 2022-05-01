#include <iostream>
using namespace std;

int main()
{
    int num, x=0;
    cin >> num;
    for (int i=2; i< num; i++){
        if(num % i == 0){
            cout << num << " isn't Prime";
            x=1;
            break;
        }
    }
    if(x == 0){
            cout << num << " is Prime";
    }    
    return 0;
}
