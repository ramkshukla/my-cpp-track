// Given a sorted and rotated array find if there is a pair with a given sum

#include <iostream>
using namespace std;

bool pairInSortedRotated(int arr[], int n, int sum)
{
    int i;
    for (i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            break;
    }
    int l = (i + 1) % n;
    int r = i;

    while (l != r)
    {
        if (arr[l] + arr[r] == sum)
            return true;
        if (arr[l] + arr[r] < sum)
            l = (l + 1) % n;
        else
            r = (n + r - 1) % n;
    }
    return false;
}
int main()
{
    int arr[] = {11, 15, 6, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 16;

    if (pairInSortedRotated(arr, n, sum))
        cout << "Array has two element whose sum is 16";
    else
        cout << "Array does not have sum 16";

    return 0;
}