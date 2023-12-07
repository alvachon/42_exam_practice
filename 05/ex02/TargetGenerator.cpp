#include "TargetGenerator.hpp"
#include "ATarget.hpp"
#include "BrickWall.hpp"
#include "Dummy.hpp"

#include <iostream>
#include <algorithm>

TargetGenerator::TargetGenerator()  {};
TargetGenerator::~TargetGenerator() {};
TargetGenerator::TargetGenerator(const TargetGenerator& other) {*this = other; };

TargetGenerator& TargetGenerator::operator=(const TargetGenerator& other)
{
    targets = other.targets;
    return *this;
};


void TargetGenerator::learnTargetType(ATarget* target) 
{
    if (target)
        targets.push_back(target);
};


void TargetGenerator::forgetTargetType(const std::string& targetType)
{
    auto it = std::remove_if(targets.begin(), targets.end(),
                             [&](const ATarget* target)
                             {
                                 return target->getType() == targetType;
                             }
                        );

    for (auto iter = it; iter != targets.end(); ++iter) {
        delete *iter;
    }

    targets.erase(it, targets.end());
}

ATarget* TargetGenerator::createTarget(const std::string& targetType)
{
    auto it = std::find_if(targets.begin(), targets.end(),
                           [&](const ATarget* target) {
                               return target->getType() == targetType;
                           });

    if (it != targets.end()) {
        return (*it)->clone();
    } else {
        return nullptr;
    }
}

