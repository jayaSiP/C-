#include <iostream>
using namespace std;
int main()
{
    int i, fact = 1;
    cout << "enter the number:";
    cin >> i;
    for (; i >= 1; i--)
        fact = fact *i;
    cout << "\nfactorial is:" << fact;
    return 0;
}