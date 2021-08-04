//Tabamo, Sayson | Function Output Given the Value of X | Equation 1
#include <iostream>
#include <cmath>
using namespace std;
int main ()

//f(x)=1/1,000,000((x-0)(x-3)(x-3)(x-7)(x-12)(x-16)(x-20)(x-23))+3

{
    //Naming Variables
    double sayson, tabamo;

    //User Input
    cout << "Hello, this program will find the f(x) of 1/1,000,000((x-0)(x-3)(x-3)(x-7)(x-12)(x-16)(x-20)(x-23))+3 with your input." << endl;
    cout << "If the value given is a zero (0)," << endl;
    cout << "then the input given is a root of the function." << endl << endl;

    cout << "Please enter a value to substitute the variable in the function: ";
    cin >> sayson;
    cout << endl;

    //Computation
    tabamo = (0.000001)*((sayson-0)*(sayson-3)*(sayson-3)*(sayson-7)*(sayson-12)*(sayson-16)*(sayson-20)*(sayson-23))+3;

    cout << "The variable is substituted with " << sayson << " therefore the f(x) is equal to: " << tabamo << endl;

}
