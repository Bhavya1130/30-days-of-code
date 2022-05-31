#include <iostream>
using namespace std;

int sum(int n, int m){
    if(m>0){
        return (n*sum(n, (m-1)));
    }
    else
        return 1;
}

int main()
{
    int n, m;
    cin >> n >> m;
    cout << sum(n, m);

    return 0;
}
