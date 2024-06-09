#include <iostream>
#include <vector>

int main() {
    // Example of a vector of integers
    std::vector<int> vec = {1, 2, 3, 4, 5};

    // Accessing elements
    std::cout << "First element: " << vec[0] << std::endl;

    // Adding elements
    vec.push_back(6);
    std::cout << "After push_back, size: " << vec.size() << std::endl;

    // Iterating over elements
    std::cout << "Elements:";
    for (auto& elem : vec) {
        std::cout << " " << elem;
    }
    std::cout << std::endl;

    return 0;
}
