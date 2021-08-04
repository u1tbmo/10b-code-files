//Basic Calculator using Case Switches
#include <iostream>
using namespace std;

int main()
{
    //Variable Declaration
    char oper;
    double num1, num2;

    //Asking for User Input
    cout << "Enter your operator(+, -, *, /): ";
    cin >> oper;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;

    //Cases and Calculations
    switch (oper){
    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;
    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;
    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;
    case '/':
        cout << num1 << " / " << num2 << " = " << num1 / num2;
        break;
    default:
        cout << "ERROR: The operator is not correct.";
        break;
    }

    //Program Termination
    return 0;
}
