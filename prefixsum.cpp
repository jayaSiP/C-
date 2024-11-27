#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    int *prefixSum = new int[n];
    prefixSum[0] = arr[0];
    for (int i = 1; i < n; ++i)
    {
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }
    cout << "The prefix sum array is:" << endl;
    for (int i = 0; i < n; ++i)
    {
        cout << prefixSum[i] << " ";
    }
    cout << endl;
    delete[] arr;
    delete[] prefixSum;

    return 0;
}
