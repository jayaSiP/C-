#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "enter the size of array" << endl;
    cin >> size;
    int arr[10];
    int i;
    for (i = 0; i < size; i++)
    {
        cout << "Enter the element at position " << i << ": ";
        cin >> arr[i];
    }
    cout << "Array elements are: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " " << endl;
    }
    int x;
    cout << "enter the num to search:";
    cin >> x;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == x)
        {
            cout << "the element is present at pos:" << i << endl;
        }
        return -1;
    }  
    return 0;
}
