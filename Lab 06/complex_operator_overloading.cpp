#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    Complex operator++() {
        ++real;
        ++imag;
        return *this;
    }

    Complex operator--() {
        --real;
        --imag;
        return *this;
    }

    Complex operator+(Complex c) {
        return Complex(real + c.real, imag + c.imag);
    }

    Complex operator-(Complex c) {
        return Complex(real - c.real, imag - c.imag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(5, 3), c2(2, 1), result;

    cout << "First complex number: ";
    c1.display();

    cout << "Second complex number: ";
    c2.display();

    result = c1 + c2;
    cout << "Addition: ";
    result.display();

    result = c1 - c2;
    cout << "Subtraction: ";
    result.display();

    ++c1;
    cout << "After increment: ";
    c1.display();

    --c2;
    cout << "After decrement: ";
    c2.display();

    return 0;
}
