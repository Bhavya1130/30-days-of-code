#include <iostream>
using namespace std;
 
int main()
{
    int arr[] = { 1, 3, 5, 3 };
 
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i += 1) {
        cout << 5 - arr[i] << " ";
    }
    cout << endl;
    return 0;
}
