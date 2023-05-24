#include<iostream>

using namespace std;

int binary_search(int arr[], int n, int key){
    int s=0;
    int e=n-1;
    
    while(s<=e){
        int mid=(s+e)/2;
        if(key==arr[mid]){
            return mid;  // Return the index of the found element
        }
        else if(key<arr[mid]){
            e=mid-1 ;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}

int main(){
    int arr[]={10,20,30,40,50,60,70};
    int n=sizeof(arr)/sizeof(int);
    int key;
    cin>>key;

    int result = binary_search(arr, n,  key);

    if(result==-1){
        cout<<"Element NOT found."<<endl;
    }
    else{
        cout<<"Element found at index: "<<result+1<<"."<<endl;
    }

    return 0;
}

