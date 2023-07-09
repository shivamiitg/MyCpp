#include <iostream>
#include <unordered_set>
using namespace std;

bool findPairWithSum(int arr[], int n, int targetSum) {
    unordered_set<int> hashSet;
    for (int i = 0; i < n; i++) {
        int complement = targetSum - arr[i];
        if (hashSet.find(complement) != hashSet.end()) {
            // Found a pair with the given sum
            return true;
        }
        hashSet.insert(arr[i]);
    }
    // No pair found with the given sum
    return false;
}

int main() {
    int arr[] = {1, 4, 2, 8, 3, 7};
    int targetSum = 10;
    int n = sizeof(arr) / sizeof(arr[0]);

    if (findPairWithSum(arr, n, targetSum)) {
        cout << "Pair with sum " << targetSum << " exists." << endl;
    } else {
        cout << "No pair with sum " << targetSum << " found." << endl;
    }

    return 0;
}
