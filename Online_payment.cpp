#include <iostream>
using namespace std;

class OnlinePayment {
    public:
        void pay(int amount) {
            cout << "Paying " << amount << " using cash." << endl;
        }
        void pay(float amount) {
            cout << "Paying " << amount << " using credit card." << endl;
        }
        void pay(string recipient, int amount) {
            cout << "Paying " << recipient << " " << amount << " using bank transfer." << endl;
        }
};

int main() {
    OnlinePayment op;
    int mode;
    cout << "Select payment mode:\n1. Cash\n2. Credit Card\n3. Bank Transfer\n";
    cin >> mode;
    switch (mode) {
        case 1: {
            int amount;
            cout << "Enter amount: ";
            cin >> amount;
            op.pay(amount);
            break;
        }
        case 2: {
            float amount;
            cout << "Enter amount: ";
            cin >> amount;
            op.pay(amount);
            break;
        }
        case 3: {
            string recipient;
            int amount;
            cout << "Enter recipient: ";
            cin >> recipient;
            cout << "Enter amount: ";
            cin >> amount;
            op.pay(recipient, amount);
            break;
        }
        default:
            cout << "Invalid mode selected." << endl;
    }
    return 0;
}
