#include <iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int* L1 = new int[n1];
    int* R1 = new int[n2];

    for (int i = 0; i < n1; i++)
        L1[i] = arr[left + i];
    for (int i = 0; i < n2; i++)
        R1[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (L1[i] <= R1[j]) {
            arr[k] = L1[i];
            i++;
        } else {
            arr[k] = R1[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L1[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R1[j];
        j++;
        k++;
    }

    delete[] L1;
    delete[] R1;
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int* arr = new int[n];  

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Given array is: ";
    printArray(arr, n);
    mergeSort(arr, 0, n - 1);
    cout << "Sorted array is: ";
    printArray(arr, n);
    delete[] arr; 

    return 0;
}
