#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

#include <iostream>
#include <string>
#include <vector>
#include "ATarget.hpp"

class TargetGenerator {
    private:
        std::vector<ATarget*> targets;
        TargetGenerator(const TargetGenerator& other);
        TargetGenerator& operator=(const TargetGenerator& other);

    public:

        //FUNCTIONS
        void learnTargetType(ATarget*);
        void forgetTargetType(std::string const &);
        ATarget* createTarget(std::string const &);

        //COPLIEN
        TargetGenerator();
        ~TargetGenerator();
};

#endif //TARGETGENERATOR.HPP