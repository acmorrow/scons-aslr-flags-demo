#include "foo.hpp"

#include <iostream>

int global = 0;

int main(int argc, char* argv[]) {
    global = something(argc + global);
    std::cout << global << " " << &global << "\n";
    std::cout << (void *)&something << "\n";
    return 0;
}
