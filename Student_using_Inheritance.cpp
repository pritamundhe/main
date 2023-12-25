#include <iostream>
using namespace std;

class Student {
    private:
        string name;
        int age;
        float marks[3];
    public:
        // Constructor
        Student(string name, int age, float marks[]) {
            this->name = name;
            this->age = age;
            for (int i = 0; i < 3; i++) {
                this->marks[i] = marks[i];
            }
        }

        // Inline function
        inline void display() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Marks: ";
            for (int i = 0; i < 3; i++) {
                cout << marks[i] << " ";
            }
            cout << endl;
        }

        // Static function
        static void printClassName() {
            cout << "Class Name: Student" << endl;
        }

        // Friend function
        friend void printStudentAge(Student s);
};

// Friend function definition
void printStudentAge(Student s) {
    cout << "Age of " << s.name << " is " << s.age << endl;
}

int main() {
    string name;
    int age;
    float marks[3];
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter marks: ";
    for (int i = 0; i < 3; i++) {
        cin >> marks[i];
    }
    Student s(name, age, marks);
    s.display();
    Student::printClassName();
    printStudentAge(s);
    return 0;
}
