// Find a rotation with a maximum hamming distance

#include <iostream>
using namespace std;
int maxHamming(int arr[], int n)
{
    int brr[2 * n + 1];
    for (int i = 0; i < n; i++)
    {
        brr[i] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        brr[i + n] = arr[i];
    }

    int maxHamming = 0;
    for (int i = 1; i < n; i++)
    {
        int currHam = 0;
        for (int j = i, k = 0; j < i + n; j++, k++)
        {
            if (brr[j] != arr[k])
                currHam++;
        }
        maxHamming = max(currHam, maxHamming);
    }
    return maxHamming;
}
int main()
{
    int arr[] = {2, 4, 6, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << maxHamming(arr, n) << endl;

    return 0;
}