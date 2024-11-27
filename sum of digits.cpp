#include <iostream>
using namepsace std;
int main()
{
    int n, sum;
    cout << "enter n";
    cin >> n;
    for (; n > 0, n++)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    cout << "sum is" << sum;
    return 0;
}