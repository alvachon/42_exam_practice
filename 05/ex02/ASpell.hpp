#ifndef ASPELL_HPP
# define ASPELL_HPP

#include <iostream>
#include <string>
#include "ATarget.hpp"

class ATarget;

class ASpell {
    public:
        ASpell(const std::string& name, const std::string& effects);
        ASpell(const ASpell& other);
        virtual ~ASpell();

        ASpell& operator=(const ASpell& other);

        const std::string& getName() const;
        const std::string& getEffects() const;

        void launch(const ATarget& target) const;

        //VIRTUAL
        virtual ASpell* clone() const = 0;

    protected:
        std::string name;
        std::string effects;
};

#endif //ASPELL.HPP