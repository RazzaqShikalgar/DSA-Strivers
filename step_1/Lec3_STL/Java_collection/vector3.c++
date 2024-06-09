#include <iostream>
#include <vector>

class Book {
public:
    std::string title;
    std::string author;
    
    Book(const std::string& t, const std::string& a) : title(t), author(a) {}
};

int main() {
    // Example of a vector of custom objects
    std::vector<Book> library;
    library.push_back(Book("The Catcher in the Rye", "J.D. Salinger"));
    library.push_back(Book("To Kill a Mockingbird", "Harper Lee"));

    // Accessing elements
    std::cout << "First book: " << library[0].title << " by " << library[0].author << std::endl;

    return 0;
}
