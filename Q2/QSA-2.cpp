//Program Debugging
#include <iostream>
using namespace std;
int main ()
{
    //Variable Declaration
    int testScore;

    //User Input
    cout << "Enter the test score: ";
    cin >> testScore;
    cout << endl;

    //Result Display using Switches
    switch (testScore / 10)
    {
        case 0:
            cout << "The Grade is F." << endl;
            break;
        case 1: //Proceeds to next case
        case 2:
            cout << "The Grade is E." << endl;
            break;
        case 3: //Proceeds to next case
        case 4:
            cout << "The Grade is D." << endl;
            break;
        case 5: //Proceeds to next case
        case 6:
            cout << "The Grade is C." << endl;
            break;
        case 7: //Proceeds to next case
        case 8:
            cout << "The Grade is B." << endl;
            break;
        case 9: //Proceeds to next case
        case 10:
            cout << "The Grade is A." << endl;
            break;
        default:
            cout << "Invalid Test Score.";
    }
    return 0;
}
