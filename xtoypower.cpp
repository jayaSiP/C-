#include <iostream>
using namespace std;
int main()
{
    int i, j, pro = 1;
    cout << "enter the value of x and y:";
    cin >> i >> j;
    for (; j>0; j--)
        pro = pro * i;
    cout << "the answer is:\n"
         << pro;
    return 0;
}