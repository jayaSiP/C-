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
    return a.profit > b.profit;
}

int knapsack(int W, vector<Item> &items)
{
    int n = 3;
    int totalProfit = 0;
    sort(items.begin(), items.end(), compare);

    for (int i = 0; i < n; i++)
    {
        if (W == 0)
            break;

        if (items[i].weight <= W)
        {

            totalProfit += items[i].profit;
            W -= items[i].weight;
        }
        else
        {
            double fraction = (double)W / items[i].weight;
            totalProfit += items[i].profit * fraction;
            W = 0;
        }
    }

    return totalProfit;
}

int main()
{
    int W = 20;
    vector<Item> items = {{18,25}, {15,24}, {10,15}};

    for (int i = 0; i < items.size(); i++)
    {
        items[i].profitPerWeight = (double)items[i].profit / items[i].weight;
    }
    int maxProfit = knapsack(W, items);

    cout << "Maximum profit: " << maxProfit << endl;

    return 0;
}
