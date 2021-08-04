//Tabamo, Sayson | Function Output Given the Value of X | Equation 2
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    //Variable Declaration
    string function = "f(x) = (1/1500000)*((x + 5)*(x - 3)*(x - 7)*(x - 14)*(x - 17)*(x - 22)*(x - 25)*(x - 28) + 4)";
    double x, result;

    //User Input
    cout << "Function: " << function << endl;
    cout << "This program solves for the value of f(x) given the value of x.\n If the output is equal to or approximately equal to 0, then tbe input is a root of the function." << endl;
    cout << "Enter the value of x: ";
    cin >> x;

    //Computation
    result = (6.666667 * pow(10,-7)) * ((x + 5)*(x - 3)*(x - 7)*(x - 14)*(x - 17)*(x - 22)*(x - 25)*(x - 28)) + 4;

    //Result
    cout << fixed << "Function Output: " << result << endl;

    //Program Termination
    return 0;
}
