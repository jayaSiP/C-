#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter three numbers:\n";
    cin >> a >> b >> c;
    if ((a > b)&&(a > c))
                cout<< "max number is:" << a;
    else if ((b > a)&&(b > c))
                cout<< "max number is:" << b;
    else
        cout << "max number is:" << c;
    return 0;
}