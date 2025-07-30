#include <iostream>
#include "greeter.h"

int main() {
    Greeter greeter;
    std::cout << greeter.getGreeting() << std::endl;
    return 0;
}
