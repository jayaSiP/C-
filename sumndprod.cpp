/*#include <iostream>
using namespace std;
int main()
{
    int n, prod = 1, sum = 0;
    cout << "enter n:";
    cin >> n;
    for (; n > 0; n = n / 10)
    {
        if (n % 2 == 0)
        {
            sum = sum + (n % 10);
        }
        else
        {
            prod = prod * (n % 10);
        }
    }
    cout << "sum is:" << sum;
        cout << "product is:" << prod;
    return 0;
}
*/
#include <iostream>
using namespace std;

int main() {
    int n, original, sum = 0, prod = 1;
    cout << "Enter n: ";
    cin >> n;

    original = n; // Save the original number

    if (n % 2 == 0) {
        // If the number is even, calculate the sum of its digits
        for (; n > 0; n /= 10) {
            sum += n % 10;
        }
        cout << "Sum of digits: " << sum << endl;
    } else {
        // If the number is odd, calculate the product of its digits
        for (; n > 0; n /= 10) {
            prod *= n % 10;
        }
        cout << "Product of digits: " << prod << endl;
    }

    return 0;
}
