//Car Rental Shop Program
#include <iostream>
using namespace std;

int main()
{
    //Variable Declaration
    double money;
    int age;

    //Introduction and User Input
    cout << "Enter your age (in years): ";
    cin >> age;
    cout << "Enter your current amount of cash: ";
    cin >> money;

    //User Validation and Result
    if (age >= 18 && money >= 200)
    {
        cout << "You can now enter the Car Rental Shop. Thank you! \n";
    }
    else
    {
        cout << "Sorry! You are not allowed to enter the Car Rental Shop. \n";
        cout << "You need to be at least 18 years old and have enough money to enter the shop. \n";
    }
    //Program Termination
    return 0;
}
