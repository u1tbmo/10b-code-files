/*
Exercise 1-4 | Inputs and Outputs 2
*/
#include <iostream>

using namespace std;

int main()
{
    string nameFirst, nameFamily, nameComplete; //Identifiers declared as strings
    cout << "What is your first name? \n>>> "; //Console displays string
    cin >> nameFirst; //Console sets extracted input to variable nameFirst
    cout << "What is your family name? \n>>> "; // Console displays string
    cin >> nameFamily; //Console sets extracted input to variable nameFamily
    nameComplete = nameFirst + " " + nameFamily; //String concatenation set to variable nameComplete
    cout << "Your complete name is: " << nameComplete; //Console displays string

    return 0; //Successful termination of programs
}
