#include "Warlock.hpp"
#include <iostream>
#include <algorithm>

Warlock::Warlock() { };

Warlock::Warlock(const Warlock& other) {*this = other; };

Warlock& Warlock::operator=(const Warlock& other)
{
    name = other.name;
    title = other.title;
    return *this;
};

Warlock::Warlock(const std::string& name, const std::string& title) : name(name), title(title) {
    std::cout << name << ": This looks like another boring day." << std::endl; };

Warlock::~Warlock() {
    std::cout << name << ": My job here is done!" << std::endl; };

void    Warlock::introduce() const {
    std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl; };

const std::string&  Warlock::getName() const { return (this->name); };
const std::string&  Warlock::getTitle() const { return (this->title); };
void                Warlock::setTitle(const std::string& title) { this->title = title; };
void                Warlock::learnSpell(ASpell* spell) { spells.push_back(spell); };

void Warlock::launchSpell(const std::string& spellName, const ATarget& target) const
{
    for (const ASpell* spell : spells)
    {
        if (spell->getName() == spellName)
        {
            spell->launch(target);
            return;
        }
    }
};

void Warlock::forgetSpell(const std::string& spellName)
{
    auto it = std::remove_if(spells.begin(), spells.end(),
                             [&](const ASpell* spell)
                             {
                                 return spell->getName() == spellName;
                             }
                        );

    for (auto iter = it; iter != spells.end(); ++iter) {
        delete *iter;
    }

    spells.erase(it, spells.end());
}