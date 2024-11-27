#include <iostream>
using namespace std;

int maxSubArrayValue(int arr[], int n, int start, int end)
{
    if (start < 0 || end >= n || start > end)
    {
        cout << "Invalid subarray range!" << endl;
        return -1;
    }

    int maxValue = arr[start];
    for (int i = start; i <= end; i++)
    {
        if (arr[i] > maxValue)
        {
            maxValue = arr[i];
        }
    }
    return maxValue;
}

int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int *arr = new int[n];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int start, end;
    cout << "Enter the start and end indices of the subarray: ";
    cin >> start >> end;

    int maxValue = maxSubArrayValue(arr, n, start, end);
    if (maxValue != -1)
    {
        cout << "The maximum value in the subarray is: " << maxValue << endl;
    }

    delete[] arr;
    return 0;
}
