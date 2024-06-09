#include <iostream>
#include <vector>

// Custom iterator class
class MyIterator {
private:
    std::vector<int>::iterator current;
public:
    MyIterator(std::vector<int>::iterator start) : current(start) {}

    // Overloading the dereference operator
    int& operator*() {
        return *current;
    }

    // Overloading the pre-increment operator
    MyIterator& operator++() {
        ++current;
        return *this;
    }

    // Overloading the equality operator
    bool operator==(const MyIterator& other) const {
        return current == other.current;
    }

    // Overloading the inequality operator
    bool operator!=(const MyIterator& other) const {
        return !(*this == other);
    }
};

int main() {
    std::vector<int> numbers = {3, 4, 5, 6, 7};

    // Creating an instance of the custom iterator
    MyIterator it(numbers.begin());

    // Using the iterator to iterate over the vector
    while (it != numbers.end()) {
        std::cout << *it << " ";
        ++it;
    }

    return 0;
}