#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string operation;
    double num1, num2;

    cout << "Enter First Number, Operator (+, -, *, /), and lastly, Second Number: ";
    cin >> num1 >> operation >> num2;

    if (operation == "+"){
        cout << num1 + num2;
    }
    else if (operation == "-"){
        cout << num1 - num2;
    }
    else if (operation == "*"){
        cout << num1 * num2;
    }
    else if (operation == "/"){
        cout << num1/num2;
    }
    else {
        cout << "Unknown operator";
    }
    return 0;
}
