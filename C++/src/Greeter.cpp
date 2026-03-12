#include "Greeter.h"
#include <utility>

Greeter::Greeter(std::string prefix)
    : prefix_(std::move(prefix)) {}

std::string Greeter::greet(const std::string& name) const {
    return prefix_ + name;
}