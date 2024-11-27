#include <iostream>
using namespace std;


void merge(int arr[], int right, int left, int mid)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int *L1 = new int[n1];
    int *R1 = new int[n2];
    for (int i = 0; i < n1; i++)
    L1[i] = arr[left + i];
for (int i = 0; i < n2; i++)
    R1[i] = arr[mid + 1 + i];
        R[i] = arr[mid + 1 + i];
    int i = 0;
    int j = 0;
    int k = left;

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
   while (i < n1)
{
    arr[k] = L[i]; 
    i++;
    k++;  
}
while (j < n2)
{
    arr[k] = R[i];  /
    j++;
    k++;  
}

    delete[] L;
    delete[] R;
}
void mergeSort(int arr[], int left, int right)
{
    if (left < right)
        int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid);
mergeSort(arr, mid + 1, right);
mergeSort(arr, mid + 1, right);
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    cout << "Given array is: ";
    printArray(arr, arr_size);

    mergeSort(arr, 0, arr_size - 1);

    cout << "Sorted array is: ";
    printArray(arr, arr_size);
    return 0;
}
