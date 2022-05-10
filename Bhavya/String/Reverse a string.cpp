#include <iostream>
#include <string>
using namespace std;

int main() 
{
	string str;
	cin >> str;
	string temp_str = str;
	int index = 0;

	for (int x = temp_str.length()-1; x >= 0; x--)
	{
		str[index] = temp_str[x];
		index++;
	}
	cout << str;
	return 0;
}
