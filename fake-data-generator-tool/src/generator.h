#ifndef GENERATOR_H
#define GENERATOR_H

#include <string>
#include <vector>

class DataGenerator {
public:
    static std::string generateName();
    static std::string generateEmail(const std::string& name);
    static std::string generatePhone();
    static std::string generateAddress();
};

#endif // GENERATOR_H