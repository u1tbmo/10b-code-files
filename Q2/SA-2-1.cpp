//SA 2-1
#include <iostream>
using namespace std;

int main()
{
    //Variable Declaration
    string name;
    double math, science, filipino, english, computer, average;

    //User Inputs
    cout << "Enter your name: ";
    cin >> name;
    cout << "Hello " << name << "! " << "Please enter your grades in the following subjects." << endl;
    cout << "Math: ";
    cin >> math;
    cout << "Science: ";
    cin >> science;
    cout << "Filipino: ";
    cin >> filipino;
    cout << "English: ";
    cin >> english;
    cout << "Computer: ";
    cin >> computer;

    //Calculations
    average = (math + science + filipino + english + computer) / 5;

    //Display of Result
    cout << endl <<"Your average grade is: " << average;

    //Program Termination
    return 0;
}
