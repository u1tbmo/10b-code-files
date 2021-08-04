//Activity 2-1
//This program will get the sum and average of three numbers.
#include <iostream>
using namespace std;
int main()
{
    //Variable Declaration
    double num1, num2, num3;
    double sum, average;
    string name;
    cout << "Please enter your name: " << endl;
    cin >> name;
    cout << "Hello " << name << endl;
    //take input from end-user
    cout << "Enter three numbers: \n";
    cin >> num1 >> num2 >> num3;

    //Sum Calculation
    sum = num1 + num2 + num3;

    //Average Calculation
    average = sum/3;

    //Display of Result
    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}
