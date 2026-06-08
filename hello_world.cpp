#include <iostream>
#include <string>
int main() {
    // Prompt user for name
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
    // Print personalized greeting
    std::cout << "Hello world from @" << name << std::endl;
    return 0;
}
