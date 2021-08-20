#include <iostream>
#include "kruskal.h"

void Graph::add_edge(int s, int d, int w)
{

    edges.push_back(std::make_pair(w, vertex(s, d)));
}

int Graph::find_parent(int n)
{

    if (parent[n] == n)
    {
        return n;
    }
    return find_parent(parent[n]); // using recursion function to find the parent of vertex
}

void Graph::Kruskal_Algorithm()
{
    std::cout << "The respective edges with their weight are:" << std::endl;
    std::cout << "Edge   :"
              << " Weight" << std::endl;
    int total_cost = 0;
    for (int i = 0; i < edges.size(); i++)
    {

        std::cout << edges[i].second.first << " -> " << edges[i].second.second << " : "
                  << edges[i].first;
        std::cout << std::endl;

        total_cost = total_cost + edges[i].first;
    }
    std::cout << "The total cost required for the construction of  tree is :" << total_cost << std::endl;

    std::cout << std::endl;

    for (int i = 0; i < edges.size(); i++)
    {
        std::sort(edges.begin(), edges.end());
    }

    std::cout << "The respective edges with their weight after sorting are:" << std::endl;
    std::cout << "Edge   :"
              << " Weight" << std::endl;

    for (int i = 0; i < edges.size(); i++)
    {
        std::cout << edges[i].second.first << " -> " << edges[i].second.second << " : "
                  << edges[i].first;
        std::cout << std::endl;
    }
    std::cout << std::endl;

    for (int i = 0; i < edges.size(); i++)
    {
        int source_parent = find_parent(edges[i].second.first);
        int destination_parent = find_parent(edges[i].second.second);

        if (source_parent != destination_parent)
        {
            new_edges.push_back(edges[i]);
            parent[source_parent] = parent[destination_parent]; // union of the  sets..
        }
    }
}

void Graph::print()
{
    int minimum_cost = 0;
    std::cout << "The edges and weight for constructing the minimum spanning trees are:" << std::endl;
    std::cout << "Edge   :"
              << " Weight" << std::endl;

    for (int i = 0; i < new_edges.size(); i++)
    {
        std::cout << new_edges[i].second.first << " -> " << new_edges[i].second.second << " : "
                  << new_edges[i].first;
        std::cout << std::endl;

        minimum_cost = minimum_cost + new_edges[i].first;
    }
    std::cout << std::endl;
    std::cout << "The minimum cost required for the construction of spanning tree is :" << minimum_cost << std::endl;
}
