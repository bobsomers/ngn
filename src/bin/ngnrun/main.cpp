#include <iostream>
#include <cstdlib>

#include "ngn/hello.hpp"

using std::cout;
using std::endl;

int main(int argc, char* argv[]) {
    cout << "Hello, ngnrun!" << endl;
    ngn::SayHello("libngn");
    return EXIT_SUCCESS;
}
