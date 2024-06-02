#include <iostream>

using namespace std;

int main() {
    int arr[5]; // array to store 5 integers
    
    // Input 5 integers into the array
    cout << "Enter 5 numbers:\n";
    for(int &num : arr) {
        cin >> num;
    }
    
    // Output the value at index 3 of the array
    cout << "Value at index 3: " << arr[3] << '\n';
    
    return 0;
}
