#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int minCostPath(const vector<vector<int>> &cost, int n)
{
    vector<int> dp(n, INT_MAX);
    dp[0] = cost[0][0];
    for (int i = 1; i < n; ++i)
    {
        dp[i] = cost[0][i];
        for (int j = 0; j < i; ++j)
        {
            dp[i] = min(dp[i], dp[j] + cost[j][i]);
        }
    }
    return dp[n - 1];
}

int main()
{
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;
    vector<vector<int>> cost(n, vector<int>(n, 0));
    cout << "Enter the cost matrix (use 0 for no path between nodes):\n";
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> cost[i][j];
        }
    }
    cout << "The minimum cost to reach from node 0 to node " << n - 1 << " is: ";
    cout << minCostPath(cost, n) << endl;
    return 0;
}
