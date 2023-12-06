#include "ATarget.hpp"

ATarget::ATarget(const std::string& targetType) : targetType(targetType)
{
    //std::cout << targetType << ": This looks like another boring day." << std::endl;
}

ATarget::~ATarget()
{
    //std::cout << targetType << ": My job here is done!" << std::endl;
}

ATarget::ATarget(const ATarget& other) : targetType(other.targetType)
{
    *this = other;
}

ATarget& ATarget::operator=(const ATarget& other)
{
    targetType = other.targetType;
    return *this;
}

//GETTERS (1)
const std::string& ATarget::getType() const {
    return targetType;
}
