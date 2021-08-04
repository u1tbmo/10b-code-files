//Activity 4-1
#include <iostream>
using namespace std;

int main(){
    // * Variable Declaration
    int numberInput; 
    int numberTimes = 0;
    string name;

    // * User Input
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter a whole number: ";
    cin >> numberInput;
    cout << " " << endl;

    // * Computation
    if(numberInput != 0 && numberInput > 0){
        for(numberTimes = 0; numberTimes < numberInput; numberTimes++){
            cout << "Your name is " << name << "." << endl;
        }
    }
    
    else if(numberInput <= 0){
        cout << "Error: User entered an invalid number. Number must be a positive whole number." << endl;
    }

    else{
        cout << "Error: Unknown" << endl;
    }

    // * Program Termination
    return 0;
}