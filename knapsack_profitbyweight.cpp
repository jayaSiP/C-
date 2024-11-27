#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct Item
{
    int profit, weight;
    double profitPerWeight;
};
bool compare(Item a, Item b)
{
    return a.profitPerWeight > b.profitPerWeight;
}
double knapsack(int W, vector<Item> &items)
{ int n = items.size();
    double totalProfit = 0.0;
    sort(items.begin(), items.end(), compare);
    for (int i = 0; i < n; i++)
    {if (W == 0)
            break;
            if (items[i].weight <= W)
        {
            totalProfit += items[i].profit;
            W -= items[i].weight;
        }
        else
        {double fraction = (double)W / items[i].weight;
        totalProfit += items[i].profit * fraction;
            W = 0;
        }
    }return totalProfit;
}
int main()
{
    int W = 25;
    vector<Item> items = {{5, 25}, {15, 21}, {10, 15}, {12, 6}};
    for (int i = 0; i < items.size(); i++)
    {items[i].profitPerWeight = (double)items[i].profit / items[i].weight;
    }
    double maxProfit = knapsack(W, items);
    cout << "Maximum profit: " << maxProfit << endl;
    return 0;
}
