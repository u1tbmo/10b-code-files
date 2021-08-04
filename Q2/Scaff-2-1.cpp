//Function Output Given the Value of X
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    //Variable Declaration
    string function = "f(x) = x^4 + 4x^3 - 14x^2 - 36x + 45";
    double x;
    double result;

    //User Input
    cout << "Function: " << function << endl;
    cout << "This program will solve for the value of f(x) given the value of x.\n" << endl;
    cout << "Enter the value of x: ";
    cin >> x;

    //Computation
    result = pow(x,4) + 4*(pow(x,3)) - 14 * (pow(x,2)) - 36 * x + 45;

    //Result
    cout << fixed << "Function Output: " << result << endl;

    //Program Termination
    return 0;
}
