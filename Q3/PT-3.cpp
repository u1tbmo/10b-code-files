//Performance Task in Computer 10
#include <iostream>
using namespace std;

int main(){

    //Variable Declaration
    /*
    IDENTIFIERS AND VARIABLES
        Tabamo = age
        tABAMO = barangay
        TaBaMo = length of stay
        tbmo = name
    */
    double Tabamo, TaBaMo;
    string tABAMO, tbmo;

    //User Input and Result Printing
    cout << "|* VOTER QUALIFICATION PROGRAM *|" << endl;
    cout << "Please enter your full name: ";
    getline(cin, tbmo);
    cout << endl;
    cout << "Good day, " << tbmo << "!" << endl << endl;
    cout << "Please enter the following details for registration." << endl << endl;
    cout << "Enter your age (in years): ";
    cin >> Tabamo;

    if (Tabamo >= 18){
        //Age is good! Continue to Length of Stay.
        cout << "Enter your length of stay in your barangay(in months): ";
        cin >> TaBaMo;
        if (TaBaMo >= 6){
            //Length of Stay is good! Continue to Barangay Validation
            cout << "Enter your Barangay Number/Name: ";
            cin >> tABAMO;
            // * * Qualified Barangays: 1, 2, 3, 5, 7, 9, Handumanan
            if (tABAMO == "1" || tABAMO == "2" || tABAMO == "5" || tABAMO == "7" || tABAMO == "9" || tABAMO ==  "Handumanan"){
                //Barangay Residency is good! Qualify user.
                cout << "Congratulations, " << tbmo << "!" << endl;
                cout << "You are qualified for voting!" << endl;
            }
            else{
                //Barangay Residency is bad! Disqualify user.
                cout << "You are not qualified for voting." << endl;
                cout << "Reason: Barangay is not eligible for voting at the moment." << endl;
                cout << "OR" << endl;
                cout << "Reason: Barangay does not exist." << endl;
            }
        }
        else if (TaBaMo < 6){
            //Length of Stay is bad! Disqualify user.
            cout << "You are not qualified for voting." << endl;
            cout << "Reason: You are not a 6-month long resident of your barangay." << endl;
        }
    }

    else if (Tabamo < 18){
        //Age is bad! Disqualify user.
        cout << "You are not qualified for voting." << endl;
        cout << "Reason: You are under the age of 18." << endl;
    }

    //Program Termination
    return 0;
}
