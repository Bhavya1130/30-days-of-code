#include <iostream>
using namespace std;

int main(){
    int n1, n2;
    char op;
    cout << "Enter Operands (eg. num1 operator num2): ";
    cin >> n1 >> op >> n2;
    switch(op){
        case '+': 
        cout << "sum: " << (n1+n2) << endl;
        break;
        case '-':{
            if(n1>n2)
            cout << "Difference: " << (n1-n2) << endl;
            else
            cout << "Difference: " << (n2-n1) << endl;
        }
        break;
        case '*':
        cout << "Product: " << n1*n2 << endl;
        break;
        case '/':{;
        cout << "Quotient: " << (float)n1/n2 << endl;
        }
        break;
        default:
        cout << "Enter correct input";
    }
    return 0;
}
