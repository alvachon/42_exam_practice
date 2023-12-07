#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP

#include <iostream>
#include <string>
#include "ATarget.hpp"


class BrickWall : public ATarget {
    public:
        BrickWall();
        ~BrickWall();
        ATarget* clone() const;
};

#endif //BRICKWALL.HPP