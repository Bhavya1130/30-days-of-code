#include<iostream>
using namespace std;

bool prime(int x)
{
    for(int i = 2; i<x; i++)
    {
        if(x%i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    prime(n);
    if(prime(n) == 0)
        cout << n << " is not prime";
    else
        cout << n << " is prime";
    return 0;
}	
