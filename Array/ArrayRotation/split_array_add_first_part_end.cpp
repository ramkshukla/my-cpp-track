// Split the array and add the first part to the end.

#include <iostream>
using namespace std;
void splitarr(int arr[], int n, int k)
{
    for (int i = 0; i < k; i++)
    {
        int x = arr[0];
        for (int j = 0; j < n - 1; j++)
        {
            arr[j] = arr[j + 1];
        }
        arr[n - 1] = x;
    }
}

int main()
{
    int arr[] = {12, 10, 6, 7, 52, 36};
    int n = sizeof(arr) / sizeof(arr[0]);
    int position = 2;
    splitarr(arr, 6, position);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}