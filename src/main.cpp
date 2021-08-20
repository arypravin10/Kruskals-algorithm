#include <iostream>
#include "kruskal.h"

int main()
{
    Graph g(4);
    g.add_edge(0, 1, 2);
    g.add_edge(1, 2, 1);
    g.add_edge(0, 3, 1);
    g.add_edge(2, 3, 3);

    g.Kruskal_Algorithm();
    g.print();
    return 0;
}