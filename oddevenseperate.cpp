#include <iostream>
#include <vector>
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
    vector<int> evenElements;
    vector<int> oddElements;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] % 2 == 0)
        {
            evenElements.push_back(arr[i]);
        }
        else
        {
            oddElements.push_back(arr[i]);
        }
    }
    int index = 0;
    for (int i = 0; i < evenElements.size(); ++i)
    {
        arr[index++] = evenElements[i];
    }
    for (int i = 0; i < oddElements.size(); ++i)
    {
        arr[index++] = oddElements[i];
    }
    cout << "The rearranged array with even elements followed by odd elements is:" << endl;
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete[] arr;

    return 0;
}
