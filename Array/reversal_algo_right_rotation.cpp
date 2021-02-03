// Reversal algorithm for right rotation of an array

#include <iostream>
using namespace std;
void reversearr(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
void rightrotate(int arr[], int n, int d)
{
    if (d == 0)
        return;
    d = d % n;
    reversearr(arr, 0, n - 1);
    reversearr(arr, 0, d - 1);
    reversearr(arr, d, n - 1);
}

void print(int arr[], int n){
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    rightrotate(arr, n, k);
    print(arr, n);

    return 0;
}