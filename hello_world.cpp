#include <iostream>
#include <string>
int main() {
    // Important: prompt user for name.
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
    // Important: print personalized greeting.
    std::cout << "Hello world from @" << name << std::endl;
    return 0;
}
