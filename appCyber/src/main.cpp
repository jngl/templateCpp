#include <iostream>

#include "User.h"

int main() {
    User u("toto");

    std::cout << "Hello, World! "<< u.getName() << std::endl;
    return 0;
}
