#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

#include <iostream>
#include <string>
#include <vector>
#include "ASpell.hpp"

class SpellBook {
    private:
        std::vector<ASpell*> spells;
        SpellBook(const SpellBook& other);
        SpellBook& operator=(const SpellBook& other);

    public:

        //FUNCTIONS
        void learnSpell(ASpell*);
        void forgetSpell(std::string const &);
        ASpell* createSpell(std::string const &);

        //COPLIEN
        SpellBook();
        ~SpellBook();
};

#endif //SPELLBOOK.HPP