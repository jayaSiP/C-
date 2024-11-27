#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct Edge {
    int src, dest, weight;
};
struct Subset {
    int parent, rank;
};
int find(Subset subsets[], int i) {
    if (subsets[i].parent != i)
        subsets[i].parent = find(subsets, subsets[i].parent);
    return subsets[i].parent;
}
void Union(Subset subsets[], int x, int y) {
    int rootX = find(subsets, x);
    int rootY = find(subsets, y);

    if (subsets[rootX].rank < subsets[rootY].rank)
        subsets[rootX].parent = rootY;
    else if (subsets[rootX].rank > subsets[rootY].rank)
        subsets[rootY].parent = rootX;
    else {
        subsets[rootY].parent = rootX;
        subsets[rootX].rank++;
    }
}
bool compareEdges(Edge a, Edge b) {
    return a.weight < b.weight;
}
void kruskalMST(vector<Edge>& edges, int V) {
    sort(edges.begin(), edges.end(), compareEdges);
    Subset* subsets = new Subset[V];
    for (int v = 0; v < V; ++v) {
        subsets[v].parent = v;
        subsets[v].rank = 0;
    }
    vector<Edge> result;
    for (const auto& edge : edges) {
        int x = find(subsets, edge.src);
        int y = find(subsets, edge.dest);

        if (x != y) {
            result.push_back(edge);
            Union(subsets, x, y);
        }
    }
    cout << "Edges in the Minimum Spanning Tree:\n";
    for (const auto& edge : result)
        cout << edge.src << " -- " << edge.dest << " == " << edge.weight << endl;

    delete[] subsets;
}
int main() {
    int V, E;
    cout << "Enter the number of vertices: ";
    cin >> V;
    cout << "Enter the number of edges: ";
    cin >> E;
    vector<Edge> edges(E);
    for (int i = 0; i < E; i++) {
        cout << "Enter source, destination, and weight of edge " << i + 1 << ": ";
        cin >> edges[i].src >> edges[i].dest >> edges[i].weight;
    }
    kruskalMST(edges, V);
    return 0;
}
