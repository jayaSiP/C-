#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int multiplication(int x, int y) {
    int n = max(to_string(x).length(), to_string(y).length());

    if (x == 0 || y == 0) {
        return 0;
    } else if (n == 1) {
        return x * y;
    } else {
        int m = n / 2;
        int a = x / (int) pow(10, m);
        int b = x % (int) pow(10, m);
        int c = y / (int) pow(10, m);
        int d = y % (int) pow(10, m);
        int p1 = multiplication(a, c);
        int p2 = multiplication(b, d);
        int p3 = multiplication(a + b, c + d);
        return p1 * (int) pow(10, 2 * m) + p2 + (int) pow(10, m) * (p3 - p1 - p2);
    }
}

int main() {
    int x, y;
    cout << "Enter the first number: ";
    cin >> x;
    cout << "Enter the second number: ";
    cin >> y;
    int result = multiplication(x, y);
    cout << "Product: " << result << endl;
    return 0;
}
