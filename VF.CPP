#include <iostream>

class Creature {
public:
    virtual void produceSound() {
        std::cout << "The creature makes a sound." << std::endl;
    }
};

class Canine : public Creature {
public:
    void produceSound() override {
        std::cout << "The canine barks." << std::endl;
    }
};

class Feline : public Creature {
public:
    void produceSound() override {
        std::cout << "The feline meows." << std::endl;
    }
};

int main() {
    Creature* creature1 = new Canine();
    Creature* creature2 = new Feline();

    creature1->produceSound();  // Output: The canine barks.
    creature2->produceSound();  // Output: The feline meows.

    delete creature1;
    delete creature2;

    return 0;
}
