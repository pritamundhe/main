#include <iostream>
using namespace std;

int main() {
    int arr[100], n, choice, i, sum = 0, count = 0;
    float avg;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the elements of the array: ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    do {
        cout << "\n\nMenu:\n1. Display ODD Indexed Nos.\n2. Calculate Sum of Array Elements\n3. Calculate Average of Array Elements\n4. Add or Delete an Element from the Array\n5. Exit\nEnter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "\nODD Indexed Nos.: ";
                for (i = 1; i < n; i += 2) {
                    cout << arr[i] << " ";
                }
                break;
            case 2:
                for (i = 0; i < n; i++) {
                    sum += arr[i];
                }
                cout << "\nSum of Array Elements: " << sum;
                break;
            case 3:
                for (i = 0; i < n; i++) {
                    sum += arr[i];
                    count++;
                }
                avg = (float)sum / count;
                cout << "\nAverage of Array Elements: " << avg;
                break;
            case 4:
                int pos, num, j;
                cout << "\nEnter the position where you want to add/delete an element: ";
                cin >> pos;
                if (pos > n || pos < 1) {
                    cout << "Invalid Position!";
                    break;
                }
                cout << "Enter the number you want to add/delete: ";
                cin >> num;
                if (choice == 4) {
                    for (i = n; i >= pos; i--) {
                        arr[i] = arr[i - 1];
                    }
                    arr[pos - 1] = num;
                    n++;
                } else {
                    for (i = pos - 1; i < n - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    n--;
                }
                cout << "Array after modification: ";
                for (i = 0; i < n; i++) {
                    cout << arr[i] << " ";
                }
                break;
            case 5:
                cout << "\nExiting...";
                break;
            default:
                cout << "\nInvalid Choice!";
        }
    } while (choice != 5);
    return 0;
}
