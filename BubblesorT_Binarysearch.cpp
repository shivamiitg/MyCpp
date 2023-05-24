#include <iostream>

void bubble_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int binary_search(int arr[], int n, int key) {
    int s = 0;
    int e = n - 1;
    int mid;

    while (s <= e) {
        mid = (s + e) / 2;

        if (key == arr[mid]) {
            return mid;
        } else if (key < arr[mid]) {
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }

    return -1;
}

int main() {
    int n;
    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    int arr[n];
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    
    bubble_sort(arr, n);

    int key;
    std::cout << "Enter the element to search: ";
    std::cin >> key;

    int result = binary_search(arr, n, key);

    if (result == -1) {
        std::cout << "Element not found." << std::endl;
    } else {
        std::cout << "Element found at index: " << result << std::endl;
    }

    return 0;
}
