#include "ngn/hello.hpp"

#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::string;

namespace ngn {

void SayHello(const string& who) {
    cout << "Hello, " << who << "!" << endl;
}

} // namespace ngn
