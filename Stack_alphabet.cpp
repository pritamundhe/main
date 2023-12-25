#include <iostream>
using namespace std;

template <typename T>
class Stack {
    private:
        T* data;
        int top;
        int capacity;
    public:
        Stack(int size) {
            data = new T[size];
            top = -1;
            capacity = size;
        }
        ~Stack() {
            delete[] data;
        }
        void push(T value) {
            if (top == capacity - 1) {
                cout << "Stack overflow" << endl;
                return;
            }
            top++;
            data[top] = value;
        }
        T pop() {
            if (top == -1) {
                cout << "Stack underflow" << endl;
                return T();
            }
            T value = data[top];
            top--;
            return value;
        }
        bool isEmpty() {
            return top == -1;
        }
        bool isFull() {
            return top == capacity - 1;
        }
};

int main() {
    Stack<char> char_stack(5);
    char_stack.push('a');
    char_stack.push('b');
    char_stack.push('c');
    cout << char_stack.pop() << endl;
    cout << char_stack.pop() << endl;
    cout << char_stack.pop() << endl;

    Stack<int> int_stack(5);
    int_stack.push(1);
    int_stack.push(2);
    int_stack.push(3);
    cout << int_stack.pop() << endl;
    cout << int_stack.pop() << endl;
    cout << int_stack.pop() << endl;

    return 0;
}
