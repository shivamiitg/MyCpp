#include <iostream>
#include <vector>

int main() {
    // Create a vector of integers
    std::vector<int> numbers;

    // Add elements to the vector
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    // Accessing elements of the vector
    std::cout << "Element at index 0: " << numbers[0] << std::endl;
    std::cout << "Element at index 1: " << numbers[1] << std::endl;
    std::cout << "Element at index 2: " << numbers[2] << std::endl;

    // Modify an element
    numbers[1] = 50;

    // Iterate over the vector and print its elements
    std::cout << "Vector elements: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Size and capacity of the vector
    std::cout << "Vector size: " << numbers.size() << std::endl;
    std::cout << "Vector capacity: " << numbers.capacity() << std::endl;

    // Clear the vector
    numbers.clear();

    // Check if the vector is empty
    if (numbers.empty()) {
        std::cout << "Vector is empty." << std::endl;
    }

    return 0;
}
