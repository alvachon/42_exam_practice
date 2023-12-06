#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <string>
#include <iostream>

class ATarget;

class ASpell {

    protected:
        std::string spellName;
        std::string spellEffects;

    private:
        // Private declarations to prevent copy and default construction
        ASpell(const ASpell& other);
        ASpell& operator=(const ASpell& other);

    public:
        ASpell(const std::string& spellName, const std::string& spellEffects);
        virtual ~ASpell();

    //GETTERS
    const std::string& getName() const;
    const std::string& getEffects() const;

    //FUNCTIONS
    virtual ASpell* clone() const = 0;
    virtual void launch(const ATarget& target) const = 0;

};

#endif // ASPELL_HPP