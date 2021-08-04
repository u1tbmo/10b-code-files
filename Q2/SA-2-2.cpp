//SA 2-2
#include <iostream>

using namespace std;

int main()
{
    //Variable Declaration
    double firstNum, secondNum, sum, difference, product, quotient;

    //User Input
    cout << "Enter your first number: ";
    cin >> firstNum;
    cout << "Enter your second number: ";
    cin >> secondNum;

    //Calculation
    sum = firstNum + secondNum;
    difference = firstNum - secondNum;
    product = firstNum * secondNum;
    quotient = firstNum / secondNum;

    //Result Display
    cout << " " << endl;
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;
    cout << "Quotient: " << quotient << endl;

    return 0;
}
