#include <iostream>
#include <vector>

int main() {
    
    std::vector<int> numbers;

    
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    
    std::cout << "Element at index 0: " << numbers[0] << std::endl;
    std::cout << "Element at index 1: " << numbers[1] << std::endl;
    std::cout << "Element at index 2: " << numbers[2] << std::endl;

    
    numbers[1] = 50;

    
    std::cout << "Vector elements: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    
    std::cout << "Vector size: " << numbers.size() << std::endl;
    std::cout << "Vector capacity: " << numbers.capacity() << std::endl;

    
    numbers.clear();

    
    if (numbers.empty()) {
        std::cout << "Vector is empty." << std::endl;
    }

    return 0;
}
