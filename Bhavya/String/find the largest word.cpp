#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    string resultWord, temp_str1;

	for (int x = 0; x < str.length(); x++)
	{
		if (str[x] != ' ' && (int(str[x]) >= 65 && int(str[x]) <= 90) || (int(str[x]) >= 97 && int(str[x]) <= 122) || (int(str[x] >= 48 && int(str[x])<= 57)))
		{
			resultWord.push_back(str[x]);
		}
		else
		{
			break;
		}
	}

   for (int x = 0; x < str.length(); x++)
	{
		if (str[x] != ' ' && (int(str[x]) >= 65 && int(str[x]) <= 90) || (int(str[x]) >= 97 && int(str[x]) <= 122) || (int(str[x] >= 48 && int(str[x]) <= 57)))
		{
			temp_str1.push_back(str[x]);

			if (x + 1 == str.length() && temp_str1.length() > resultWord.length())
			{
				resultWord = temp_str1;
			}
		}
		else
		{
			if (temp_str1.length() > resultWord.length())
			{
				resultWord = temp_str1;
			}

			temp_str1.clear();
		}
	}
	cout << resultWord;
	return 0;
}
