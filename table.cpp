#include <iostream>
using namespace std;
int main()
{
    int i, j;
    cout << "enter the number:";
    cin >> i;
    for (j = 1; j <= 20; j++)
        cout << "\n" << i * j;
    return 0;
}