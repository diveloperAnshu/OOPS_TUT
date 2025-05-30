#include<bits/stdc++.h>
using namespace std;

class Complex {
    private:
        double real, image;
    public:
        Complex(double r = 0.0, double i = 0.0) : real(r), image(i) {};

        Complex operator+(const Complex& other) const {
            return Complex(real + other.real, image + other.image);
        }

        Complex operator-(const Complex& other) const {
            return Complex(real - other.real, image - other.image);
        }

        Complex operator*(const Complex& other) const {
            return Complex(real * other.real - image * other.image, real * other.image + image * other.real);
        }

        friend ostream& operator<<(ostream& out, const Complex& c) {
            out << c.real << " + " << c.image << "i";
            return out;
        }
};


int main() {
    Complex c1(3.0, 4.0), c2(1.0, 2.0);
    cout << "c1 = " << c1 << endl;
    cout << "c2 = " << c2 << endl;
    cout << "sum = " << c1 + c2 << endl;
    cout << "difference = " << c1 - c2 << endl;
    cout << "product = " << c1 * c2 << endl;
    return 0; 
}