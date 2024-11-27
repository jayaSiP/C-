#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
vector<vector<int>> MatrixMultiply(const vector<vector<int>> &A, const vector<vector<int>> &B)
{int p = A.size();
    int q = A[0].size();
    int r = B[0].size();
    vector<vector<int>> C(p, vector<int>(r, 0));
    for (int i = 0; i < p; i++)
    {for (int j = 0; j < r; j++)
        {for (int k = 0; k < q; k++)
            { C[i][j] += A[i][k] * B[k][j];
            }}}
    return C;
}
int MatrixChainMultiplication(const vector<int> &dimensions)
{int n = dimensions.size();
    vector<vector<int>> dp(n, vector<int>(n, 0));
    for (int len = 2; len < n; ++len)
    {for (int i = 1; i < n - len + 1; ++i)
        {int j = i + len - 1;
            dp[i][j] = INT_MAX;
            for (int k = i; k < j; ++k)
            {int cost = dp[i][k] + dp[k + 1][j] + dimensions[i - 1] * dimensions[k] * dimensions[j];
            if (cost < dp[i][j])
                {dp[i][j] = cost;
                }}}}
    return dp[1][n - 1];
}
int main()
{int n;
    cout << "Enter the number of matrices: ";
    cin >> n;
    vector<int> dimensions(n + 1);
    cout << "Enter the dimensions of the matrices (n+1 values for n matrices): ";
    for (int i = 0; i <= n; i++)
    {
        cin >> dimensions[i];
    }
    int minCost = MatrixChainMultiplication(dimensions);
    cout << "Minimum number of multiplications is: " << minCost << endl;
    return 0;
}
