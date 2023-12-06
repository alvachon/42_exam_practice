#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <string>
#include <iostream>

class Warlock {
    private:
        std::string name;
        std::string title;
        //std::vector<ASpell*> spells;

        // Private declarations to prevent copy and default construction
        Warlock(const Warlock& other);
        Warlock& operator=(const Warlock& other);

    public:
        Warlock(const std::string& name, const std::string& title);
        ~Warlock();

        //GETTERS
        const std::string& getName() const;
        const std::string& getTitle() const;

        //SETTERS
        void setTitle(const std::string& newTitle);

        //FUNCTIONS
        void introduce() const;

};

#endif // WARLOCK_HPP