// Maximum sum of i*arr[i] among all rotation of a given array

#include <iostream>
using namespace std;
int maxSum(int arr[], int n)
{
    int res = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        int curr_sum = 0;
        for (int j = 0; j < n; j++)
        {
            int index = (i + j) % n;
            curr_sum += j * arr[index];
        }
        res = max(res, curr_sum);
    }
    return res;
}
int main()
{
    int arr[] = {8, 3, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << maxSum(arr, n) << endl;
    return 0;
}