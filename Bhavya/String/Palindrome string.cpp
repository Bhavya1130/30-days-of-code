#include <iostream>
using namespace std;

int main() {
    string text;
    getline(cin, text);
    string str1, str2;
    int str_len = int(text.size());
    for (int i = 0; i < str_len; i++){
        if((text[i] >= 'a' && text[i] <= 'z' ) || (text[i] >= 'A' && text[i] <= 'Z' ))
            str1+=tolower(text[i]);
        if((text[str_len-1-i] >= 'a' && text[str_len-1-i] <= 'z' ) || (text[str_len-1-i] >= 'A' && text[str_len-1-i] <= 'Z' ))
            str2+=tolower(text[str_len-1-i]);
   }

  if (str1 == str2)
  cout << str1 << " is Palindrome";
  else
  cout << str1 << " is not palindrome";
  return 0;
}
