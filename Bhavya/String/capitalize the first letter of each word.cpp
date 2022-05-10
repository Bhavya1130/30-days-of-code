#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string str;
    getline(cin, str);
	for (int x = 0; x < str.length(); x++)
	{
		if (x == 0)
		{
			str[x] = toupper(str[x]);
		}
		else if (str[x - 1] == ' ')
		{
			str[x] = toupper(str[x]);
		}
	}
	cout << str;
	return 0;
}
