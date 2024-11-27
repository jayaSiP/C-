#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter n: ";
    cin >> n;

    for (int temp = n; temp > 0; temp /= 10) {
        sum += temp % 10;
    }

    cout << "Sum is: " << sum << endl;
    return 0;
}
