#include <iostream>
using namespace std;

class Convert {
    protected:
        float val1;
        float val2;
    public:
        Convert() {
            val1 = 0;
            val2 = 0;
        }
        float getinit() {
            return val1;
        }
        float getconv() {
            return val2;
        }
        virtual void compute() = 0;
};

class CelsiusToFahrenheit : public Convert {
    public:
        CelsiusToFahrenheit(float celsius) {
            val1 = celsius;
        }
        void compute() {
            val2 = (val1 * 9 / 5) + 32;
        }
};

int main() {
    float t;
    cout << "Enter Temperature: ";
    cin >> t;
    CelsiusToFahrenheit ctf(t);
    ctf.compute();
    cout << "Celsius: " << ctf.getinit() << endl;
    cout << "Fahrenheit: " << ctf.getconv() << endl;
    return 0;
}
