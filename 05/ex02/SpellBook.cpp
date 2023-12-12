#include "SpellBook.hpp"
#include <iostream>
#include <algorithm>
#include "Fwoosh.hpp"
#include "Fireball.hpp"
#include "Polymorph.hpp"

SpellBook::SpellBook()  {};

SpellBook::SpellBook(const SpellBook& other) {*this = other; };

SpellBook& SpellBook::operator=(const SpellBook& other)
{
    spells = other.spells;
    return *this;
};

SpellBook::~SpellBook()
{
    for (const ASpell* spell : spells)
        delete spell;
};

void SpellBook::learnSpell(ASpell* spell)
{
    if (spell)
        spells.push_back(spell->clone());
};

void SpellBook::forgetSpell(const std::string& spellName)
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

ASpell* SpellBook::createSpell(const std::string& spellName)
{
    auto it = std::find_if(spells.begin(), spells.end(),
                           [&](const ASpell* s) {
                               return s->getName() == spellName;
                           });

    if (it != spells.end())
        return (*it)->clone();
    else
        return nullptr;
}