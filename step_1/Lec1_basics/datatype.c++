#include <iostream>
#include <string>
using namespace std;

int main()
{
    // int: 4 bytes, range: -2.147 x 10^9 to 2.147 x 10^9
    int num = 10;

    // long: at least 4 bytes, usually 8 bytes on 64-bit systems
    long x = 15;

    // long long: at least 8 bytes, usually 8 bytes on 64-bit systems
    long long y = 15.8995755875884 * 1'000'000'000'000;

    // float: 4 bytes, range: ~1.2 x 10^-38 to ~3.4 x 10^38
    float z = 5.634534 * 1'000'000'000'000;

    // double: 8 bytes, range: ~2.3 x 10^-308 to ~1.7 x 10^308
    double w = 5.0423 * 1'000'000'000'000;

    // Ignore leftover newline character from previous input
    cin.ignore();

    // string: handles text input
    string full_name;
    cout << "Enter your full name: ";
    getline(cin, full_name);
    cout << "My name is " << full_name << endl;

    // Output the values with better readability
    cout << "Value of x: " << x << "\nValue of y: " << y << "\nValue of z: " << z << "\nValue of w: " << w << endl;

    // char: single character, 1 byte
    char ch = 'g';
    cout << ch << endl;

    return 0;
}
