#ifndef LIB_NGN_NGN_HPP
#define LIB_NGN_NGN_HPP

#include <string>

namespace ngn {

/**
 * Enters the ngn event loop. Never returns.
 */
void MainLoop();

/**
 * Prints "Hello, who!" to stdout.
 */
void Hello(const std::string& who);

} // namespace ngn

#endif // LIB_NGN_NGN_HPP
