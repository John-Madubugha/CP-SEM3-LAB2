#include <iostream>
#include <string>

class MathProcessor {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }

    std::string add(std::string a, std::string b) {
        return a + b;
    }
};

int main() {
    MathProcessor processor;

    std::cout << processor.add(3, 4) << std::endl;             // Output: 7
    std::cout << processor.add(3.14, 2.71) << std::endl;       // Output: 5.85
    std::cout << processor.add("Hello, ", "world!") << std::endl;  // Output: Hello, world!

    return 0;
}
