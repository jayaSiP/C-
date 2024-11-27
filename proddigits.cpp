/*#include <iostream>
using namespace std;
int main()
{
    int n, prod = 1;
    cout << "enter n:";
    cin >> n;
    while (n > 0)
    {
        prod = prod * (n % 10);
        n = n / 10;
    }
    cout << "prod is :" << prod;
    return 0;
}*/
// using for loop
#include <iostream>
using namespace std;
int main()
{
    int n, prod = 1;
    cout << "enter n:";
    cin >> n;
    for (;n > 0;n=n/10)
        prod = prod * (n % 10);
    cout << "prod is :" << prod;
    return 0;
}