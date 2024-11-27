#include <iostream>
#include <limits.h> // For INT_MAX and INT_MIN
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n < 2)
    {
        cout << "The array must contain at least 2 elements to find the second largest and second smallest elements." << endl;
        return 1;
    }
    int *arr = new int[n];
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    int largest = INT_MIN, secondLargest = INT_MIN;
    int smallest = INT_MAX, secondSmallest = INT_MAX;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] < smallest)
        {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < secondSmallest && arr[i] != smallest)
        {
            secondSmallest = arr[i];
        }
    }
    cout << "The second largest element in the array is: " << secondLargest << endl;
    cout << "The second smallest element in the array is: " << secondSmallest << endl;
    delete[] arr;

    return 0;
}
