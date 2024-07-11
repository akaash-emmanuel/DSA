#include <iostream>
using namespace std;

int binarysearch(int arr[], int n, int key){
    int start = 0;
    int end = n;

    while(start<=end){
        int mid_index = (start+end)/2;
            if (arr[mid_index] == key){
                return mid_index;
            }
            else if(arr[mid_index] > key){
                end = mid_index - 1;
            }
            else{
                start = mid_index + 1;
            }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int key;
    cin>>key;

    cout<<binarysearch(arr, n, key)<<endl;
}