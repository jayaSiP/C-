#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "enter the size of array" << endl;
    cin >> size;
    int arr[10];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element at position " << i << ": ";
        cin >> arr[i];
    }
    cout << "Array elements are: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " " << endl;
    }
    int j = size - 1;
    int i = 0;
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    cout << "the reversed array is:";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}