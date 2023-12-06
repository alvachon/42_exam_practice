#include "ASpell.hpp"

ASpell::ASpell(const std::string& spellName, const std::string& spellEffects) : spellName(spellName), spellEffects(spellEffects)
{
    //std::cout << spellName << ": This looks like another boring day." << std::endl;
}

ASpell::~ASpell()
{
    //std::cout << spellName << ": My job here is done!" << std::endl;
}

ASpell::ASpell(const ASpell& other) : spellName(other.spellName), spellEffects(other.spellEffects)
{
    *this = other;
}

ASpell& ASpell::operator=(const ASpell& other)
{
    spellName = other.spellName;
    spellEffects = other.spellEffects;
    return *this;
}

//GETTERS (2)
const std::string& ASpell::getName() const {
    return spellName;
}
const std::string& ASpell::getEffects() const {
    return spellEffects;
}