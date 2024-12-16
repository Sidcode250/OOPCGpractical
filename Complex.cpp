#include <iostream>

using namespace std;

class Complex {
public:
    double real, imag;

    // Default constructor
    Complex() : real(0), imag(0) {}

    // Constructor with real and imaginary parts
    Complex(double r, double i) : real(r), imag(i) {}

    // Overload + operator for addition
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    // Overload * operator for multiplication
    Complex operator*(const Complex& other) const {
        return Complex(real * other.real - imag * other.imag,
                       real * other.imag + imag * other.real);
    }

    // Overload << operator for output
    friend ostream& operator<<(ostream& os, const Complex& c) {
        os << c.real << " + " << c.imag << "i";
        return os;
    }

    // Overload >> operator for input
    friend istream& operator>>(istream& is, Complex& c) {
        is >> c.real >> c.imag;
        return is;
    }
};

int main() {
    Complex c1, c2;

    cout << "Enter the real and imaginary parts of the first complex number: ";
    cin >> c1;

    cout << "Enter the real and imaginary parts of the second complex number: ";
    cin >> c2;

    Complex sum = c1 + c2;
    Complex product = c1 * c2;

    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;

    return 0;
}
