/*You are given a string s consisting of lowercase English letters, and an integer k.

First, convert s into an integer by replacing each letter with its position in the alphabet (i.e., replace 'a' with 1, 'b' with 2, ..., 'z' with 26). Then, transform the integer by replacing it with the sum of its digits. Repeat the transform operation k times in total.

For example, if s = "zbax" and k = 2, then the resulting integer would be 8 by the following operations:

    Convert: "zbax" ➝ "(26)(2)(1)(24)" ➝ "262124" ➝ 262124
    Transform #1: 262124 ➝ 2 + 6 + 2 + 1 + 2 + 4 ➝ 17
    Transform #2: 17 ➝ 1 + 7 ➝ 8

Return the resulting integer after performing the operations described above.



Example 1:

Input: s = "iiii", k = 1
Output: 36
Explanation: The operations are as follows:
- Convert: "iiii" ➝ "(9)(9)(9)(9)" ➝ "9999" ➝ 9999
- Transform #1: 9999 ➝ 9 + 9 + 9 + 9 ➝ 36
Thus the resulting integer is 36.
*/
#include <iostream>
#include <string>

class Solution
{
public:
    int getLucky(const std::string &s, int k)
    {
        // Step 1: Convert the string to a numeric representation
        std::string numStr;
        for (char c : s)
        {
            numStr += std::to_string(getLetterPosition(c));
        }

        // Perform the transformation k times
        for (int i = 0; i < k; ++i)
        {
            numStr = std::to_string(digitSumFromString(numStr));
        }

        return std::stoi(numStr);
    }

private:
    // Helper function to get the letter position in the alphabet
    int getLetterPosition(char c)
    {
        return c - 'a' + 1;
    }

    // Helper function to calculate the sum of digits from a string representation
    int digitSumFromString(const std::string &str)
    {
        int sum = 0;
        for (char c : str)
        {
            sum += c - '0';
        }
        return sum;
    }
};

int main()
{
    Solution sol;
    std::string s1 = "iiii";
    int k1 = 1;
    std::string s2 = "leetcode";
    int k2 = 2;
    std::string s3 = "zbax";
    int k3 = 2;

    std::cout << "Output for s1: " << sol.getLucky(s1, k1) << std::endl;
    std::cout << "Output for s2: " << sol.getLucky(s2, k2) << std::endl;
    std::cout << "Output for s3: " << sol.getLucky(s3, k3) << std::endl;

    return 0;
}
