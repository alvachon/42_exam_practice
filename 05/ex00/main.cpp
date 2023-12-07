#include "Warlock.hpp"

int main() {
    
    Warlock Will();//This should not compile (OK)
    Warlock const richard("Richard", "Mistress of Magma");

    std::cout << richard.getName() << " - " << richard.getTitle() << std::endl;

    Warlock* jack = new Warlock("Jack", "the Long");
    std::cout << jack->getName() << " - " << jack->getTitle() << std::endl;
    jack->setTitle("the Mighty");
    std::cout << jack->getName() << " - " << jack->getTitle() << std::endl;

    richard.introduce();
    jack->introduce();

    delete jack;
    return 0;
}