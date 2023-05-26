#include<iostream>

using namespace std;

void print_subarray(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<", ";;
            }
            cout<<endl;
        }
    }
}

int main(){
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    print_subarray(arr, n);
    return 0;
}