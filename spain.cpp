#include <iostream>
#include <cstdlib>  // For getenv

int main() {
    // Example: Get the value of the "HOME" environment variable
    const char* homePath = std::getenv("HOME");

    if (homePath != nullptr) {
        std::cout << "HOME environment variable: " << homePath << std::endl;
    } else {
        std::cout << "HOME environment variable not found." << std::endl;
    }

    return 0;
}
