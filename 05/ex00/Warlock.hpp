#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>
#include <string>

class Warlock {
    private:
        std::string name;
        std::string title;

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

        //COPLIEN
        Warlock(const std::string& name, const std::string& title);
        ~Warlock();
};

#endif //WARLOCK.HPP