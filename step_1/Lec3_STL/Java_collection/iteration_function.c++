#include <iostream>
#include <vector>

int main()
{
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Using begin() and end() to iterate over the vector
    std::cout << "Using begin() and end() to iterate over the vector:" << std::endl;
    for (auto it = numbers.begin(); it != numbers.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    // Using std::rotate to shift the elements of the vector
    std::cout << "Using std::rotate to shift the elements of the vector:" << std::endl;
    std::rotate(numbers.begin(), numbers.begin() + 1, numbers.end());
    for (auto it = numbers.begin(); it != numbers.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Using std::copy to copy the elements of the vector to another vector
    std::cout << "Using std::copy to copy the elements of the vector to another vector:" << std::endl;
    std::vector<int> copyNumbers(numbers.size());
    std::copy(numbers.begin(), numbers.end(), copyNumbers.begin());
    for (auto it = copyNumbers.begin(); it != copyNumbers.end(); ++it)
    {
        std::cout << *it << " ";
        std::cout << std::endl;
        std::cout << std::endl;

        // Using std::replace to replace all occurrences of a value in the vector
        std::cout << "Using std::replace to replace all occurrences of a value in the vector:" << std::endl;
        std::replace(numbers.begin(), numbers.end(), 3, 10);
        for (auto it = numbers.begin(); it != numbers.end(); ++it)
        {
            std::cout << *it << " ";
        }
        std::cout << std::endl;
    }
}