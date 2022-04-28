#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    int length = str.length();
    for (int i = 0; i < length; i++) {
        int c = str[i];
        if (isspace(c))
          cout << "\n";
        else
          cout << str[i];
    }
    return 0;
}
