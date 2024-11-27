#include <iostream>
#include <climits>
#include <vector>
using namespace std;
int second_largest(vector<int> &arr)
{
    int size = arr.size();
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            cout << "max is:" << max << endl;
        }
    }
    int second_m = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > second_m && arr[i] < max)
        {
            second_m = arr[i];
        }
    }
    if (second_m == INT_MIN)
    {
        return -1;
    }
    return second_m;
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    vector<int> arr(size);

    cout << "Enter the array elements:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "The array elements are:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }

    int result = second_largest(arr);
    if (result != -1)
    {
        cout << "The second largest element is: " << result << endl;
    }
    else
    {
        cout << "There is no second largest element." << endl;
    }

    return 0;
}