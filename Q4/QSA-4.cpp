//4th Quarter Process
#include <iostream>
using namespace std;

int main(){
    //Var Declaration
    int num;
    string n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
    string names[num] = {n1, n2, n3, n4, n5, n6, n7, n8, n9, n10};

    //User Input
    cout << "Please enter names below: " << endl;
    for(num = 1; num <= 10 ; num++){
        cout << "Name " << num << ": ";
        cin >> names[num];
    }

    //Computation and Result
    cout << "Displaying five names in even positions below: " << endl;
    for(num = 1; num <= 10; num++){
        if(num % 2 == 0){
            cout << names[num] << endl;
        }
    }

    //Program Termination
    return 0;
}