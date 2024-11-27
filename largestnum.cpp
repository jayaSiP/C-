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

    int max = arr[0];

    for (int i = 1; i < n; ++i)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "The largest element in the array is: " << max << endl;
    delete[] arr;

    return 0;
}
