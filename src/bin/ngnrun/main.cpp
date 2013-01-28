#include <cstdlib>

#include "ngn/ngn.hpp"

using ngn::Hello;
using ngn::MainLoop;

int main(int argc, char* argv[]) {
    Hello("ngnrun");
    MainLoop();
    return EXIT_SUCCESS;
}
