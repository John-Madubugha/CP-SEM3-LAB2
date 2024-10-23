#include <iostream>

class ComplexNumber {
private:
    double realPart;
    double imaginaryPart;

public:
    ComplexNumber(double r = 0, double i = 0) : realPart(r), imaginaryPart(i) {}

    ComplexNumber operator+(const ComplexNumber& c) {
        return ComplexNumber(realPart + c.realPart, imaginaryPart + c.imaginaryPart);
    }

    void show() {
        std::cout << realPart << " + " << imaginaryPart << "i" << std::endl;
    }
};

int main() {
    ComplexNumber num1(3.0, 4.0), num2(1.0, 2.0);
    ComplexNumber num3 = num1 + num2;

    num1.show();  // Output: 3 + 4i
    num2.show();  // Output: 1 + 2i
    num3.show();  // Output: 4 + 6i

    return 0;
}

