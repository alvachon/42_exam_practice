#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <string>
#include <iostream>

class ATarget {
    protected:
        std::string targetType;

    private:
        // Private declarations to prevent copy and default construction
        ATarget(const ATarget& other);
        ATarget& operator=(const ATarget& other);

    public:
        ATarget(const std::string& targetType);
        virtual ~ATarget();

    //GETTERS
    const std::string& getType() const;

    virtual ATarget* clone() const = 0;
    //virtual void launch(const ATarget& target) const;

};

#endif // ATARGET_HPP