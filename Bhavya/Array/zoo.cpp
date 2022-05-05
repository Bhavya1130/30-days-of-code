#include <iostream>
using namespace std;

int main()
{
    int x=0, y=0;
    char str[20];
    cin >> str;
    for(int i {}; i<20; i++){
        if(str[i]=='z' ||str[i]=='Z'){
           x++;  
        }    
        else if(str[i]=='o' ||str[i]=='O'){
            y++;
        }
    }
    if((2*x)==y){
        cout << "Yes";    
    }
    else 
        cout << "No";
    return 0;
}
