#include <iostream>

using namespace std;

//FUNCTION PROTOTYPES
int option1();
int option2();
int option3();

//Print menu
//Get Input
//If valid, do a thing
//If not valid, repeat

int main()
{
    int userChoice = 0;
    bool keepGoing = true;
    while (keepGoing){
        cout << "simple menu" << endl;
        cout << "1. Option 1" << endl;
        cout << "2. Option 2" << endl;
        cout << "3. Option 3" << endl;
        cout << "4. Exit" << endl;
        cout << "Choose: ";
        cin >> userChoice;
        // cout << "You picked " << userChoice << endl;
        // Take action based on menu
        if (userChoice == 1) {
            int results = option1();
            cout << "You picked Option 1." << endl;
        }
       else if (userChoice == 2) {
            int results = option2();
            cout << "You picked Option 2." << endl;
       }
       else if (userChoice == 3) {
            int results = option3();
            cout << "You picked Option 3." << endl;
       }
        else if (userChoice ==4) {
            cout << "Exiting...goodbye." << endl;
            keepGoing = false; //exit the loop
        }
        else {
            // not any of the above options
            cout << "Invalid input, please try again." << endl;
        }
    }
        return 0;
}
//// FUNCTION DEFiNITIONS
// other function are listed below
int option1() {
    // just demonstrate calling and returning
    cout << "You picked Option 1." << endl;
    return 1;
   }
int option2() {
    // just demonstrate calling and returning
    cout << "You picked Option 2." << endl;
       return 2;
}
int option3() {
    // just demonstrate calling and returning
    cout << "You picked Option 3." << endl;
    return 3;
    }
