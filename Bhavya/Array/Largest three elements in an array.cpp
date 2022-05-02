#include <iostream>
using namespace std;

int main()
{
    int first, second, third;
    int n;
    cout << "Number of element in array: ";
    cin >> n;
    int arr[n];
    cout << "Elements of array: ";
    for(int i {}; i< n; i++){
        cin >> arr[i];
    }
    third = first = second = 0;
    for(int i {}; i< n; i++){
        for (i = 0; i < n ; i ++)
    {
        if (arr[i] > first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
         else if (arr[i] > second)
        {
            third = second;
            second = arr[i];
        }
  
        else if (arr[i] > third)
            third = arr[i];
    }
    }
    cout << "Three gratest number are: ";
    cout << first << " " << second << " " << third;
    return 0;
}
