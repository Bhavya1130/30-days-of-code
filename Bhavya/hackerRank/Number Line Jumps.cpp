#include <iostream>
using namespace std;

int main()
{
    int x1, x2, v1, v2;
    cin >> x1 >> v1 >> x2 >> v2;
    int s1, s2;
    s1=x1;
    s2=x2;
    while(s1<s2){
        s1+=v1;
        s2+=v2;
    }
    if(s1==s2){
        cout << "YES";
    }
    else
    cout<<"NO";
    return 0;
}
