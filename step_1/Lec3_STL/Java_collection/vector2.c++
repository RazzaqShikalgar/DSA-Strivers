#include <iostream>
#include <vector>
#include <string>

int main() {
    // Example of a vector of strings
    std::vector<std::string> names = {"Alice", "Bob", "Charlie"};

    // Modifying elements
    names[1] = "David";
    names.push_back("Eve");

    // Displaying elements
    std::cout << "Names:";
    for (const auto& name : names) {
        std::cout << " " << name;
    }
    std::cout << std::endl;

    return 0;
}
