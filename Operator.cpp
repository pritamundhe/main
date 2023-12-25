#include <iostream>
using namespace std;

class Complex {
    private:
        float real;
        float imag;
    public:
        Complex() {
            real = 0;
            imag = 0;
        }
        Complex(float r, float i) {
            real = r;
            imag = i;
        }
        Complex operator+(Complex const &obj) {
            Complex res;
            res.real = real + obj.real;
            res.imag = imag + obj.imag;
            return res;
        }
        Complex operator-(Complex const &obj) {
            Complex res;
            res.real = real - obj.real;
            res.imag = imag - obj.imag;
            return res;
        }
        Complex operator*(Complex const &obj) {
            Complex res;
            res.real = real * obj.real - imag * obj.imag;
            res.imag = real * obj.imag + imag * obj.real;
            return res;
        }
        Complex operator/(Complex const &obj) {
            Complex res;
            float denominator = obj.real * obj.real + obj.imag * obj.imag;
            res.real = (real * obj.real + imag * obj.imag) / denominator;
            res.imag = (imag * obj.real - real * obj.imag) / denominator;
            return res;
        }
        friend ostream& operator<<(ostream& os, const Complex& obj);
        friend istream& operator>>(istream& is, Complex& obj);
};

ostream& operator<<(ostream& os, const Complex& obj) {
    os << obj.real << " + " << obj.imag << "i";
    return os;
}

istream& operator>>(istream& is, Complex& obj) {
    cout << "Enter Real Part: ";
    is >> obj.real;
    cout << "Enter Imaginary Part: ";
    is >> obj.imag;
    return is;
}

int main() {
    Complex c1, c2;
    cout << "Enter first complex number:" << endl;
    cin >> c1;
    cout << "Enter second complex number:" << endl;
    cin >> c2;
    cout << "Sum of the complex numbers: " << c1 + c2 << endl;
    cout << "Difference of the complex numbers: " << c1 - c2 << endl;
    cout << "Product of the complex numbers: " << c1 * c2 << endl;
    cout << "Quotient of the complex numbers: " << c1 / c2 << endl;
    return 0;
}
