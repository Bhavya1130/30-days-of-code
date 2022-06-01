#include <iostream>
using namespace std;

int search(int n, int m[], int k){
    if(n>=0){
    if(m[n]==k)
        return n;
    return (search((n-1), m, k));
    }
    else
      return -1;
}

int main()
{
    int n;
    cin >> n;
    int m[n];
    for(int i {}; i<n; i++){
        cin >> m[i];
    }
    int k;
    cin >> k;
    if((search(n, m, k))==-1)
        cout << "Not in the array.";
    else
        cout << search(n, m, k);
    return 0;
}
