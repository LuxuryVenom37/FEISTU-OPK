#pragma once
#include <string>

class Greeter {
public:
    explicit Greeter(std::string prefix);

    std::string greet(const std::string& name) const;

private:
    std::string prefix_;
};