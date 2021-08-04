//Password Validation
#include <iostream>
using namespace std;
int main()
{
    //Variable Declaration
    string inputUser, inputPassword, validUser, validPassword;
    validUser = "123abc";
    validPassword = "234abc";

    //User Input:
    cout << "Enter your login details to access the system." << endl << endl;
    cout << "Username: ";
    cin >> inputUser;
    cout << "Password: ";
    cin >> inputPassword;
    cout << endl;

    //Computation and Result
    if (inputUser == validUser && inputPassword == validPassword){
        cout << "You logged in successfully! Congratulations!";
    }
    else if (inputUser == validUser && inputPassword != validPassword) {
        cout << "Error: Wrong Password";
    }
    else if (inputUser != validUser && inputPassword == validPassword) {
        cout << "Error: Unknown User";
    }
    else {
        cout << "Error: Unknown User and Wrong Password";
    }
    //Program Termination
    return 0;
}
