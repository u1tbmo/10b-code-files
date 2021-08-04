//Activity 4-2
#include <iostream>
using namespace std;

int main(){
    // * Variable Decalaration
    int rowsInput, rowCreator, charCreator;

    // * User Input
    cout << "Enter number of rows: ";
    cin >> rowsInput;

    // * Computation
    // ! Creates Rows Depending on User Input (Starting with the Number or Rows Given in Input)
    for(rowCreator = rowsInput; rowCreator >= 1; rowCreator--){
        // ! For Loop Prints Characters Depending on The Current Row That is Being Printed
        for(charCreator = 1; charCreator <= rowCreator; charCreator++ ){
            cout << " *" << charCreator << "* ";
        }
        cout << endl;
    }
}