#pragma once
#include <vector>
#include <algorithm>
#define vertex std::pair<int, int>

class Graph
{

private:
    //  here the first element of pair denotes the weight and second pair denotes to source and destination..

    std::vector<std::pair<int, vertex>> edges;     // for storing the edges and weight of the graph
    std::vector<std::pair<int, vertex>> new_edges; //for storing edges of MST
    int *parent;

public:
    Graph(int V) // V-> num of vertices in the graph...
    {
        parent = new int[V];
        for (int i = 0; i < V; i++)
        {
            parent[i] = i;
        }
    }

    void add_edge(int s, int d, int w);
    int find_parent(int n);

    void Kruskal_Algorithm();
    void print();

    ~Graph() {}
};
