#include "ATarget.hpp"
#include "ASpell.hpp"
#include <iostream>

ATarget::ATarget(const std::string& type) : type(type) {};
ATarget::ATarget(const ATarget& other) { *this = other; };
ATarget::~ATarget(){};

ATarget& ATarget::operator=(const ATarget& other)
{
    type = other.type;
    return *this;
};

const std::string& ATarget::getType() const { return (this->type); };

void ATarget::getHitBySpell(const ASpell& spell) const {
    std::cout << type << " has been " << spell.getEffects() << "!" << std::endl;
};
