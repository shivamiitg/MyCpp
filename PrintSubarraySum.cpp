#include<iostream>

using namespace std;

void print_subarray_with_sum(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int sum = 0;  
            for (int k = i; k <= j; k++) {
                sum += arr[k];  
                cout << arr[k] << ", ";
            }
            cout << "Sum: " << sum << endl;  
        }
    }
}

int main(){
    int arr[]={10,20,30,40,50};
    int n =sizeof(arr)/sizeof(arr[0]);
    print_subarray_with_sum(arr, n);

    return 0;
}