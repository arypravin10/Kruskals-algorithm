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

    std::cout << std::endl;

    Graph g1(6);
    g1.add_edge(1, 4, 5);
    g1.add_edge(1, 3, 2);
    g1.add_edge(2, 4, 3);
    g1.add_edge(5, 4, 9);
    g1.add_edge(8, 3, 2);
    g1.add_edge(2, 5, 7);
    g1.add_edge(2, 8, 3);
    g1.add_edge(1, 8, 1);

    g1.Kruskal_Algorithm();
    g1.print();

    std::cout << std::endl;

    Graph g2(6);
    g2.add_edge(1, 2, 4);
    g2.add_edge(0, 2, 5);
    g2.add_edge(1, 0, 4);
    g2.add_edge(2, 5, 3);
    g2.add_edge(3, 2, 3);
    g2.add_edge(3, 4, 3);
    g2.add_edge(4, 2, 4);
    g2.add_edge(5, 3, 2);
    g2.add_edge(5, 4, 3);
    g2.Kruskal_Algorithm();
    g2.print();
}