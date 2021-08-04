//Odd Numbers
#include <iostream>
using namespace std;

int main(){
    // * Variable Declaration
    int maxNum, oddNum;
    int startNum = 0;
    int num = 0;
    // * User Input
    cout << "Enter a number: ";
    cin >> maxNum;
    cout << endl;
    // * Computation and Result
    cout << "All odd numbers up to " << maxNum << " are: ";
        while(startNum <= maxNum){
            if (num % 2 != 0){
                cout << num << " ";
                }
            startNum++;
            num++;
        }
    cout << endl;
    // * Program Termination
    return 0;
}