//4th Quarter PT
#include <iostream>
#include <ctime>
#include <random>

using namespace std;

int main(){
    //*Variable Declaration
    int r;
    unsigned int m; //Allows for a range of 0 to 2^32
    int entriesValue;
    int randNum;
    string entries[] = {};
    
    //*Random Number Generator Using C++11 (Mersenne Twister)
    //*Use Mersenne Twister and Loop to Generate Random Numbers
    mt19937 randNumGen(time(NULL));
    uniform_int_distribution<int> winChoose(1,30);

    //*User Input
    cout << "Welcome to the Names of Fortune!" << endl;
    cout << "How many entries do we have?" << endl;
    cout << "Enter the number of entries (minimum of 30): ";
    cin >> entriesValue;

    //*Computation
    if(entriesValue >= 30){
        string entries[entriesValue];
        for(int i = 0; i < entriesValue; i++){
        cout << "Enter name " << i + 1 << ": "; 
        cin >> entries[i];
    }
    
    //*Results
    for(int w = 0; w <= 4; w++){
        r = winChoose(randNumGen);
        randNum = r - 1;
        if(w == 0){    
            cout << entries[randNum] << " is 5th Place!" << endl;
        }
        else if(w == 1){
            cout << entries[randNum] << " is 4th Place!" << endl;
        }
        else if(w == 2){
            cout << entries[randNum] << " is 3rd Place!" << endl;
        }      
        else if(w == 3){
            cout << entries[randNum] << " is 2nd Place!" << endl;
        }
        else if(w == 4){
            cout << entries[randNum] << " is 1st Place!" << endl;
        }
    }

    //*Program Termination
    return 0;
    }

    else{
        cout << "ERROR: Input Value Requirement. Minimum is 30. Input Value is " << entriesValue << "." << endl;
        cout << "Please restart the program to try again." << endl;
        return 1;
    }

    
}