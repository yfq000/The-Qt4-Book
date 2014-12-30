#include <cstdlib>
#include <iostream>

#include "square.h"

int main(int argc, char *argv[])
{
    if (argc != 2) {
        std::cerr << "Usage: square <number>" << std::endl;
        return 1;
    }
    double n = std::strtod(argv[1], 0);
    std::cout << "The square of " << argv[1] << " is "
        << square(n) << std::endl;
    return 0;
}
