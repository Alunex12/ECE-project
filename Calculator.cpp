#include <bits/stdc++.h>
using namespace std;

int main() {
    double n1, n2;
    string op;           

    
    cout << "Enter first number: ";
    cin >> n1;

    
    cout << "Enter an operator (+, -, *, /, ^): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> n2;

    if (op == "+") {
        cout << "Result = " << n1 + n2 << endl;
    } 
    else if (op == "-") {
        cout << "Result = " << n1 - n2 << endl;
    } 
    else if (op == "*") {
        cout << "Result = " << n1 * n2 << endl;
    } 
    else if (op == "/") {
        if (n2 != 0) {
            cout << "Result = " << n1 / n2 << endl;
        } else {
            cout << "Math error" << endl;
        }
    }
    else if (op == "^")
    {
        cout << "Result =" << pow(n1,n2) << endl;
    }
    else {
        cout << "opperator is not assigned" << endl;
    }
    return 0;
}
