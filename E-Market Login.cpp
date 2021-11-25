#include <iostream>
using namespace std;

int main()
{
    int login1;
    int login2;
    string FirstName;
    string LastName;
    string EmailAddress;
    string HomeBusiness;
    string Username;
    string Password;
    int MobileNumber;

    cout << "===========================================================================\n";
    cout << "Hello, and welcome to the E-Marketplace.\n";
    cout << "Here you can meet Cargo Owners, Drivers and Transportation Companies alike!\n";
    cout << "===========================================================================\n";
    cout << "\n";
    cout << "0 - Exit\n";
    cout << "1 - Cargo Owners\n";
    cout << "2 - Drivers\n";
    cout << "3 - Transportation Companies\n";
    cout << "\n";
    cout << "Enter an option number: \n"; cin >> login1;
    cout << "\n";

    if (login1 == 0) {
        cout << "Terminating Program.\n";
        return 0;
    }

    if (login1 == 1, 2, 3) {
        cout << "0 - Exit\n";
        cout << "1 - Log In\n";
        cout << "2 - Sign Up\n";
        cout << "\n";
        cout << "Enter an option number: \n"; cin >> login2;
        
        cout << "\n";

        if (login2 == 0) {
            cout << "Terminating Program.\n";
            return 0;
        }

        if (login2 == 1) {
            cout << "Please sign up first.\n";
            return 0;
        }

        if (login2 == 2) {
            cout << "To sign up, we wil need a few details from you.\n";
            cout << "\n";
            cout << "Enter your Name: \n"; cin >> FirstName;
            cout << "\n";
            cout << "Enter your Surname: \n"; cin >> LastName;
            cout << "\n";
            cout << "Email Address: \n"; cin >> EmailAddress;
            cout << "\n";
            cout << "Home/Business Address: \n"; cin >> HomeBusiness;
            cout << "\n";
            cout << "Username: \n"; cin >> Username;
            cout << "\n";
            cout << "Password: \n"; cin >> Password;
            cout << "\n";
            cout << "Mobile Number: \n"; cin >> MobileNumber;
            cout << "\n";
            cout << "=================================================\n";
            cout << "=================================================\n";
            cout << "\n";
            cout << "Your details are: \n";
            cout << "\n";
            cout << "First Name: " << FirstName << endl;
            cout << "\n";
            cout << "Surname: " << LastName << endl;
            cout << "\n";
            cout << "Email Address: " << EmailAddress << endl;
            cout << "\n";
            cout << "Home/Business Address: " << HomeBusiness << endl;
            cout << "\n";
            cout << "Username: " << Username << endl;
            cout << "\n";
            cout << "Password: " << Password << endl;
            cout << "\n";
            cout << "Mobile Number: " << MobileNumber << endl;
            cout << "\n";
            cout << "Thanks for this information, " << FirstName << ".\n";
            cout << "We will send you a verification message on the number provided.\n";
            cout << "Thank you for signing up! You can now use the Marketplace.\n";
            cout << "\n";
            cout << "Please press 'Enter' to close the program.\n"; cin;
            return 0;
        }
        else {
            cout << "INVALID SELECTION";
            return 0;
        }
    }
    else {
        cout << "INVALID SELECTION";
        return 0;
    }


}