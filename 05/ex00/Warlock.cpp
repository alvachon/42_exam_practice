#include "Warlock.hpp"

// ACTIVE COPLIAN (2)
Warlock::Warlock(const std::string& name, const std::string& title) : name(name), title(title) {
        std::cout << name << ": This looks like another boring day." << std::endl;
}
Warlock::~Warlock() {
    std::cout << name << ": My job here is done!" << std::endl;
}

//GETTERS (2)
const std::string& Warlock::getName() const {
    return name;
}
const std::string& Warlock::getTitle() const {
    return title;
}

//SETTERS (1)
void Warlock::setTitle(const std::string& newTitle) {
    title = newTitle;
}

//FUNCTIONS (1)
void Warlock::introduce() const {
    std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}

// PRIVATE (3)
Warlock::Warlock(const Warlock& other) : name(other.name), title(other.title) {
    *this = other;
}
Warlock& Warlock::operator=(const Warlock& other){
    name = other.name;
    title = other.title;
    return *this;
}
Warlock::Warlock() {
    // Default constructor (if needed) - declare as private to disable
}
