// Reversal algorithm for array rotation
#include <iostream>
using namespace std;
void reversearray(int arr[], int start, int end){
    while (start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
void leftrotate(int arr[], int d, int n){
    if (d==0)
        return;
    d = d%n;
    reversearray(arr, 0, d-1);
    reversearray(arr, d, n-1);
    reversearray(arr, 0, n-1);
}
void print(int arr[], int n){
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d = 2;
    leftrotate(arr, d, n);
    print(arr, n);

    return 0;
}