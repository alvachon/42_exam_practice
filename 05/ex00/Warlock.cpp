#include "Warlock.hpp"

Warlock::Warlock()
{
    std::cout << "This should not compile" << std::endl;
};

Warlock::Warlock(const Warlock& other)
{
    *this = other;
    std::cout << "Other: This should not compile" << std::endl;
};

Warlock& Warlock::operator=(const Warlock& other)
{
    name = other.name;
    title = other.title;
    std::cout << "Operator=: This should not compile" << std::endl;
    return *this;
};

Warlock::Warlock(const std::string& name, const std::string& title) : name(name), title(title)
{
    std::cout << name << ": This looks like another boring day." << std::endl;
};

Warlock::~Warlock()
{
    std::cout << name << ": My job here is done!" << std::endl;
};

const std::string& Warlock::getName() const
{
    return (this->name);
};

const std::string& Warlock::getTitle() const
{
    return (this->title);
};

void    Warlock::setTitle(const std::string& title)
{
    this->title = title;
};

void    Warlock::introduce() const
{
    std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
};