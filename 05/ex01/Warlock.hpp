#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>
#include <string>
#include <vector>
#include "ASpell.hpp"

class Warlock {
    private:
        std::string name;
        std::string title;
        std::vector<ASpell*> spells;

        //COPLIEN
        Warlock();
        Warlock(const Warlock& other);
        Warlock& operator=(const Warlock& other);

    public:
        //GETTERS
        const std::string& getName() const;
        const std::string& getTitle() const;

        //SETTERS
        void setTitle(const std::string& title);

        //FUNCTIONS
        void introduce() const;
        void learnSpell(ASpell* spell);
        void launchSpell(const std::string& spellName, const ATarget& target) const;
        void forgetSpell(const std::string& spellName);

        //COPLIEN
        Warlock(const std::string& name, const std::string& title);
        ~Warlock();
};

#endif //WARLOCK.HPP