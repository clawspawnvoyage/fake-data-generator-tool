#include "generator.h"
#include <random>
#include <ctime>

std::string DataGenerator::generateName() {
    static const std::vector<std::string> firstNames = {"John", "Jane", "Michael", "Emily", "David"};
    static const std::vector<std::string> lastNames = {"Smith", "Doe", "Johnson", "Williams", "Brown"};

    static std::mt19937 rng(static_cast<unsigned int>(std::time(nullptr)));
    std::uniform_int_distribution<size_t> firstDist(0, firstNames.size() - 1);
    std::uniform_int_distribution<size_t> lastDist(0, lastNames.size() - 1);

    return firstNames[firstDist(rng)] + " " + lastNames[lastDist(rng)];
}

std::string DataGenerator::generateEmail(const std::string& name) {
    std::string email = name;
    for (char& c : email) {
        if (c == ' ') c = '.';
    }
    return email + "@example.com";
}

std::string DataGenerator::generatePhone() {
    static std::mt19937 rng(static_cast<unsigned int>(std::time(nullptr)));
    std::uniform_int_distribution<int> dist(0, 9);

    std::string phone = "555-";
    for (int i = 0; i < 3; ++i) {
        phone += std::to_string(dist(rng));
    }
    phone += "-";
    for (int i = 0; i < 4; ++i) {
        phone += std::to_string(dist(rng));
    }
    return phone;
}

std::string DataGenerator::generateAddress() {
    static const std::vector<std::string> streets = {"Main St", "Oak Ave", "Pine Rd", "Maple Dr", "Elm Blvd"};
    static const std::vector<std::string> cities = {"Springfield", "Riverside", "Lakewood", "Greenville", "Fairview"};

    static std::mt19937 rng(static_cast<unsigned int>(std::time(nullptr)));
    std::uniform_int_distribution<size_t> streetDist(0, streets.size() - 1);
    std::uniform_int_distribution<size_t> cityDist(0, cities.size() - 1);
    std::uniform_int_distribution<int> numDist(100, 9999);

    return std::to_string(numDist(rng)) + " " + streets[streetDist(rng)] + ", " + cities[cityDist(rng)];
}