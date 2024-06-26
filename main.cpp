#include <iostream>
#include "Vector/Vector.h" // Adjusted include path for Vector.h

int main() {
    // Create an instance of Vector
    Vector vec;

    // Add values to the vector
    vec.PushBack(5);
    vec.PushBack(10);
    vec.PushBack(15);

    // Display all values in the vector
    std::cout << "Values in vector:" << std::endl;
    for (int i = 0; i < 10; ++i) {
        std::cout << "Value at index " << i << ": " << vec.ValueAt(i) << std::endl;
    }

    // Count empty slots
    std::cout << "Empty slots: " << vec.CountEmpty() << std::endl;

    // Search for a value
    int searchValue = 10;
    if (vec.Search(searchValue)) {
        std::cout << searchValue << " is found in the vector." << std::endl;
    } else {
        std::cout << searchValue << " is not found in the vector." << std::endl;
    }

    // Remove a value
    int indexToRemove = 1;
    if (vec.Remove(indexToRemove)) {
        std::cout << "Removed value at index " << indexToRemove << "." << std::endl;
    } else {
        std::cout << "Failed to remove value at index " << indexToRemove << ". Index out of range." << std::endl;
    }

    // Display updated vector
    std::cout << "Updated vector:" << std::endl;
    for (int i = 0; i < 10; ++i) {
        std::cout << "Value at index " << i << ": " << vec.ValueAt(i) << std::endl;
    }

    return 0;
}