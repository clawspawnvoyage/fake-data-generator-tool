#include <iostream>
#include "generator.h"

int main() {
    std::cout << "Fake Data Generator Tool\n";
    std::cout << "-----------------------\n";

    std::string name = DataGenerator::generateName();
    std::cout << "Name: " << name << "\n";
    std::cout << "Email: " << DataGenerator::generateEmail(name) << "\n";
    std::cout << "Phone: " << DataGenerator::generatePhone() << "\n";
    std::cout << "Address: " << DataGenerator::generateAddress() << "\n";

    return 0;
}