#ifndef ATARGET_HPP
# define ATARGET_HPP

#include <iostream>
#include <string>

class ASpell;

class ATarget {

    public:
        ATarget(const std::string& type);
        ATarget(const ATarget& other);
        virtual ~ATarget();

        ATarget& operator=(const ATarget& other);

        const std::string& getType() const;
        void getHitBySpell(const ASpell& spell) const;

        //VIRTUAL
        virtual ATarget* clone() const = 0;
    protected:
        std::string type;
};

#endif //ATARGET.HPP