//Car Rental Shop Program
#include <iostream>
using namespace std;

int main()
{
    //Variable Declaration
    double money, hours, amountToPay, change;
    int age;

    //Introduction and User Input
    cout << "Welcome to Euan's Car Rental Shop!" << endl;
    cout << "Car Rental Rate: Php200 per hour" << endl;
    cout << "Enter your age (in years): ";
    cin >> age;
    cout << "Enter your current amount of cash: ";
    cin >> money;
    cout << "Hours to rent: ";
    cin >>  hours;

    //Computation
    amountToPay = 200 * hours;
    change = money - amountToPay;

    //Spacing
    cout << "\n\n";

    //User Validation and Result
    if (age >= 18)
    {
        if (money >= 200 && amountToPay <= money)
        {
            cout << "Car Rental Service Details:" << endl;
            cout << "Amount to Pay: " << amountToPay << endl;
            cout << "Amount Paid: " << money << endl;
            cout << "Change Amount: " << change << endl << endl;
            cout << "You can now enter the Car Rental Shop. Thank you!" << endl;
        }
        else if (money >= 200 && amountToPay >= money)
        {
            cout << "Sorry! You do not have enough money to rent a car for " << hours << " hours.";
        }
        else
        {
            cout << "Sorry! You do not have enough money to rent a car.";
        }
    }
    else
    {
        cout << "Sorry! You are not allowed to enter the Car Rental Shop. \n";
        cout << "You need to be at least 18 years old to enter the shop. \n";
    }
    //Program Termination
    cout << endl <<endl;
    return 0;
}
