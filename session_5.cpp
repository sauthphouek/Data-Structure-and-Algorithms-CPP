// Write programming to check the user input yes or no 
// If the user input is yes, then print "Yes"   
// If the user input is no, then print "No"

// Algorithm
// 1. Start
// 2. Declare a string variable
// 3. Ask the user to enter the input
// 4. Read the user input
// 5. If the user input is yes, then print "Yes"
// 6. If the user input is no, then print "No"
// 7. End

#include <iostream>
#include <string>
using namespace std; 


int main() {
    string input;
    cout << "Enter yes or no: ";
    cin >> input;
    if(input == "yes") {
        cout << "Yes" << endl;
    } else if(input == "no") {
        cout << "No" << endl;
    }
    return 0;
}

