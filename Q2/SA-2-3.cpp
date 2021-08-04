// SA 2-3
#include <iostream>
using namespace std;

int main()
{
    //Variable Declaration
    int birthmonth;

    //User Input
    cout << "Enter the number of your birth month \n >>> ";
    cin >> birthmonth;
    cout << "\n";

    //Cases
    switch (birthmonth)
    {
    case 1:
        cout << "Your birthday is on January.";
        break;
    case 2:
        cout << "Your birthday is on February.";
        break;
    case 3:
        cout << "Your birthday is on March.";
        break;
    case 4:
        cout << "Your birthday is on April.";
        break;
    case 5:
        cout << "Your birthday is on May.";
        break;
    case 6:
        cout << "Your birthday is on June.";
        break;
    case 7:
        cout << "Your birthday is on July.";
        break;
    case 8:
        cout << "Your birthday is on August.";
        break;
    case 9:
        cout << "Your birthday is on September.";
        break;
    case 10:
        cout << "Your birthday is on October.";
        break;
    case 11:
        cout << "Your birthday is on November.";
        break;
    case 12:
        cout << "Your birthday is on December.";
        break;
    default:
        cout << "ERROR: No such month exists.";
    }
    //Program Termination
    return 0;
}
