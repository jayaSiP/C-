#include <iostream>
#include <vector>
#include <climits>

const int INF = INT_MAX;
int findMinDistance(const std::vector<int> &dist, const std::vector<bool> &sptSet, int numNodes) {
    int min = INF, minIndex;

    for (int v = 0; v < numNodes; v++) {
        if (!sptSet[v] && dist[v] <= min) {
            min = dist[v];
            minIndex = v;
        }
    }
    return minIndex;
}
void dijkstra(const std::vector<std::vector<int>> &graph, int source, int numNodes) {
    std::vector<int> dist(numNodes, INF);  
    std::vector<bool> sptSet(numNodes, false);
    dist[source] = 0;

    for (int count = 0; count < numNodes - 1; count++) {
        int u = findMinDistance(dist, sptSet, numNodes);
        sptSet[u] = true;
        for (int v = 0; v < numNodes; v++) {
            if (!sptSet[v] && graph[u][v] && dist[u] != INF && dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }
    std::cout << "Vertex \t Distance from Source\n";
    for (int i = 0; i < numNodes; i++) {
        std::cout << i << " \t\t " << (dist[i] == INF ? "INF" : std::to_string(dist[i])) << "\n";
    }
}

int main() {
    int numNodes;
    std::cout << "Enter the number of nodes: ";
    std::cin >> numNodes;

    std::vector<std::vector<int>> graph(numNodes, std::vector<int>(numNodes));
    std::cout << "Enter the adjacency matrix (use 0 for no direct edge):\n";
    for (int i = 0; i < numNodes; i++) {
        for (int j = 0; j < numNodes; j++) {
            std::cin >> graph[i][j];
        }
    }
    int source;
    std::cout << "Enter the source node: ";
    std::cin >> source;
    dijkstra(graph, source, numNodes);
    return 0;
}
