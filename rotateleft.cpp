#include <iostream>
void EXCHANGE(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}

void rotate_Left(int *p1, int p2)
{
    if (p2 <= 0)
        return;
    int temp = *p1;
    for (int i = 0; i < p2 - 1; ++i)
    {
        *(p1 + i) = *(p1 + i + 1);
    }
    *(p1 + p2 - 1) = temp;
}

void printArray(int *arr, int size)
{
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    int arr[] = {90,34,21,564,54};
    int p2 = 4;

    std::cout << "Original Array: ";
    printArray(arr, 5);

    rotate_Left(arr, p2);

    std::cout << "Rotated Array: ";
    printArray(arr, 5);

    return 0;
}
