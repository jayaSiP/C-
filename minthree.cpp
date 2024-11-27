#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter three numbers:\n";
    cin >> a >> b >> c;
    if ((a < b) && (a < c))
        cout << "min number is:" << a;
    else if ((b < a) && (b < c))
        cout << "min number is:" << b;
    else
        cout << "min number is:" << c;
    return 0;
}