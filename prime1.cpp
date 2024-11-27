#include <iostream>
using namespace std;
bool isprime(int n)
{
    if (n < 2)
    {
        return false;
    }
    else
    {
        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    }
}
int main()
{
    int a;
    cout << "enter number to check:" << endl;
    cin >> a;
    if (isprime(a))
    {
        cout << "It is a prime number";
    }
    else
        cout << "not a prime number";
    return 0;
}