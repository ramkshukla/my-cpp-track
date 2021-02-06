// Program to reverse an array

#include <iostream>
using namespace std;
void reversearr(int arr[], int start, int end){
    while (start<end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    
}

void printarr(int arr[], int n){
    int i;
    for (i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5;

    reversearr(arr, 0, n-1);
    printarr(arr, n);

    return 0;
}