#include "../src/generator.h"
#include <cassert>
#include <string>

void testGenerateName() {
    std::string name = DataGenerator::generateName();
    assert(!name.empty());
    assert(name.find(' ') != std::string::npos);
}

void testGenerateEmail() {
    std::string email = DataGenerator::generateEmail("John Doe");
    assert(email == "John.Doe@example.com");
}

void testGeneratePhone() {
    std::string phone = DataGenerator::generatePhone();
    assert(phone.size() == 12);
    assert(phone[3] == '-' && phone[7] == '-');
}

void testGenerateAddress() {
    std::string address = DataGenerator::generateAddress();
    assert(!address.empty());
    assert(address.find(',') != std::string::npos);
}

int main() {
    testGenerateName();
    testGenerateEmail();
    testGeneratePhone();
    testGenerateAddress();
    return 0;
}