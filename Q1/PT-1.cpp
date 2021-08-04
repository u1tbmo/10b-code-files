// American Capacity Converter (Fluid Ounces to Cups Converter) - Tabamo, Sayson - 10B
#include <iostream>

using namespace std;

/*
(Proof of Originality???????)
Identifiers:
Fluid Ounces = Aya
Cups = Sheneville
Fluid Ounces in a Cup = Jarov
*/

int main() {
   float Aya, Sheneville; //The identifiers are declared as the float data type to make result more accurate.
   const float Jarov = 8; //The identifier is declared as a constant float data type.
   cout << "|  FLUID OUNCES TO CUPS CONVERTER  |" << endl; //Title of program
   cout << "|    by Tabamo, ----------- and    |" << endl; //Author of program
   cout << "|  Sayson, ------------------- 10B |" << endl << endl; //Author of program
   cout << "Good day! \nThis simple program is made to convert fluid ounces to cups!\n\n"; //Text is printed to explain to the audience the function of the program
   cout << "Enter the volume of fluid ounce(s) you wish to convert to cup(s).\n>>> "; //Text is printed ask for user input
   cin >> Aya; //User input is extracted to be assigned to variable.
   Sheneville = Aya / Jarov; //Formula for the converted fluid ounces.
   cout << endl << Aya << " fluid ounce(s) is equal to " << Sheneville << " cup(s).\n"; //Text is printed out to show the converted result.
   return 0; //Program is successfully terminated.
}
