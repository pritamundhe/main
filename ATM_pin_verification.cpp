#include <iostream>
#include <string>
using namespace std;

int main() {
    int pin = 1234;
    int attempts = 3;

    while (attempts > 0) {
        int input;
        cout << "Enter your PIN: ";
        cin >> input;

        try {
            if (input != pin) {
                attempts--;

                if (attempts == 0) {
                    cout << "Access denied. Maximum attempts exceeded.";
                } else {
                    throw string("Invalid PIN. ") + to_string(attempts) + " attempts remaining.";
                }
            } else {
                cout << "PIN verified. Access granted." << endl;
                break;
            }
        } catch (const string& msg) {
            cerr << msg << endl;
        }
    }

    return 0;
}
