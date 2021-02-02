// Program to cyclically rotation array by one

#include <iostream>
using namespace std;

void cyclically_rotation(int arr[], int n){
    int i, x = arr[n-1];
    for (i=n-1; i>0; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = x;
}
int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    cyclically_rotation(arr, n);

    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

}