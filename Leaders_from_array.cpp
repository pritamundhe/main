#include <iostream>
using namespace std;

void printLeaders(int arr[],int size) {
    int max=arr[size-1];
    cout<<max<<" ";
    for (int i=size-2; i>=0; i--) {
        if (arr[i]>max) {
            max=arr[i];
            cout<<max<<" ";
        }
    }
}

int main() {
    int arr[]={16,17,4,3,5,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    printLeaders(arr,n);
    return 0;
}
