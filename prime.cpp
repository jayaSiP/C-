#include <iostream>
using namespace std;
int main()
{
    int i, count = 0, j = 1;
    cout << "enter the number:";
    cin >> i;
    for (j = 1; j <= i; j++)
    {
        if (i % j == 0)
            count++;
    }
    if (count == 2)
        cout << "\nit is a prime number";
    else
        cout << "\nit is a composite number";
     return 0;
}