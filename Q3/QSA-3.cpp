//3rd Quarter Process
#include <iostream>
using namespace std;

int main(){
    //Variable Declaration
    int number1, number2, number3, bignumber, smallnumber;

    //User Input
    cout << "Enter three numbers: " << endl;
    cin >> number1;
    cin >> number2;
    cin >> number3;

    //Computation and Result
    if (number1 > number2 && number1 > number3) {
            if (number2 > number3){
                bignumber = number1;
                smallnumber = number3;
                cout << "The highest number is: " << bignumber << "." << endl;
                cout << "The lowest number is: " << smallnumber << "." << endl;
            }
            else if (number2 < number3){
                bignumber = number1;
                smallnumber = number2;
                cout << "The highest number is: " << bignumber << "." << endl;
                cout << "The lowest number is: " << smallnumber << "." << endl;
            }
            else{
                cout << "Error: Some numbers are equal.";
            }

    }

    else if (number2 > number1 && number2 > number3) {
            if (number1 > number3){
                bignumber = number2;
                smallnumber = number3;
                cout << "The highest number is: " << bignumber << "." << endl;
                cout << "The lowest number is: " << smallnumber << "." << endl;
            }
            else if (number1 < number3){
                bignumber = number2;
                smallnumber = number1;
                cout << "The highest number is: " << bignumber << "." << endl;
                cout << "The lowest number is: " << smallnumber << "." << endl;
            }
            else{
                cout << "Error: Some numbers are equal.";
            }
        }
    else if (number3 > number1 && number3 > number2) {
            if (number1 > number2){
                bignumber = number3;
                smallnumber = number2;
                cout << "The highest number is: " << bignumber << "." << endl;
                cout << "The lowest number is: " << smallnumber << "." << endl;
            }
            else if (number1 < number2){
                bignumber = number3;
                smallnumber = number1;
                cout << "The highest number is: " << bignumber << "." << endl;
                cout << "The lowest number is: " << smallnumber << "." << endl;
            }
            else{
                cout << "Error: Some numbers are equal.";
            }
        }
    else{
        cout << "Error: Some numbers are equal.";
    }
    //Program Termination
    return 0;
}
