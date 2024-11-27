#include <iostream>
#include <string>
using namespace std;
/*int main()
{
    int i, org, rev = 0;
    cout << "enter the number:";
    cin >> i;
    org = i;
    for (; i > 0; i = i / 10)
        rev = (rev * 10) + i % 10;
    cout << "\nrev is: " << rev;
    if (org == rev)
        cout << "\n It is a palindrome number";
    else
        cout << "\nnot a palindrome";
    return 0;
} */
// for strings
bool isplaindrome(string str)
{
    int s = 0;
    int e = str.length() - 1;
    while (s < e)
    {
        if (str[s] != str[e])
        {
            return false;
        }
        s++;
        e--;
    }
    return true;
}
int main()
{
    string str;
    cout << "enter the string:"<<endl;
    cin >> str;
    if (isplaindrome(str))
    {
        cout << "it is palindrome";
    }
    else
        cout << "not a palindorme";
    return 0;
}

/*
class Solution {
public:
    bool isPalindrome(int x) {
        // A negative number cannot be a palindrome
        if (x < 0) {
            return false;
        }
        
        // Store the original number to compare later
        int original = x;
        int reversed = 0;
        
        // Reverse the number
        while (x > 0) {
            int digit = x % 10;          // Get the last digit
            reversed = reversed * 10 + digit;  // Append the digit to the reversed number
            x = x / 10;                 // Remove the last digit from x
        }
        
        // Check if the original number and the reversed number are the same
        return original == reversed;
    }
};*/