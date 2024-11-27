#include <iostream>
#include <vector>
#include <climits>

const int MAX_NODES = 100; // Maximum number of nodes

// Function to find the minimum key vertex that is not yet included in the MST
int findMinKey(const std::vector<int> &key, const std::vector<bool> &inMST, int numNodes)
{
    int min = INT_MAX, minIndex;

    for (int v = 0; v < numNodes; v++)
    {
        if (!inMST[v] && key[v] < min)
        {
            min = key[v];
            minIndex = v;
        }
    }
    return minIndex;
}

// Function to print the MST and calculate its total weight
void printMST(const std::vector<int> &parent, const std::vector<std::vector<int>> &graph, int numNodes)
{
    int totalWeight = 0;
    std::cout << "Edge \tWeight\n";
    for (int i = 1; i < numNodes; i++)
    {
        std::cout << parent[i] << " - " << i << " \t" << graph[i][parent[i]] << "\n";
        totalWeight += graph[i][parent[i]];
    }
    std::cout << "Total Weight of MST: " << totalWeight << "\n";
}

// Function to implement Prim's Algorithm
void primsAlgorithm(const std::vector<std::vector<int>> &graph, int numNodes)
{
    std::vector<int> parent(numNodes);        // Array to store constructed MST
    std::vector<int> key(numNodes, INT_MAX);  // Key values to pick the minimum weight edge
    std::vector<bool> inMST(numNodes, false); // To represent the set of vertices included in MST

    // Start from the first vertex (index 0)
    key[0] = 0;
    parent[0] = -1; // First node is the root of MST

    for (int count = 0; count < numNodes - 1; count++)
    {
        // Pick the minimum key vertex from the set of vertices not yet included in MST
        int u = findMinKey(key, inMST, numNodes);
        inMST[u] = true; // Add the picked vertex to the MST set

        // Update key values and parent index of the adjacent vertices of the picked vertex
        for (int v = 0; v < numNodes; v++)
        {
            // Update key only if graph[u][v] is smaller than key[v] and v is not in MST
            if (graph[u][v] && !inMST[v] && graph[u][v] < key[v])
            {
                key[v] = graph[u][v];
                parent[v] = u;
            }
        }
    }

    // Print the constructed MST
    printMST(parent, graph, numNodes);
}

int main()
{
    int numNodes;
    std::cout << "Enter the number of nodes: ";
    std::cin >> numNodes;

    std::vector<std::vector<int>> graph(numNodes, std::vector<int>(numNodes));
    std::cout << "Enter the adjacency matrix (use 0 for no edge):\n";
    for (int i = 0; i < numNodes; i++)
    {
        for (int j = 0; j < numNodes; j++)
        {
            std::cin >> graph[i][j];
        }
    }
    primsAlgorithm(graph, numNodes);
    return 0;
}
