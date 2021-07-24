#include<iostream>
#include "kruskal.h"

bool Edge::compare(Edge e1, Edge e2){
    return e1.weight>e2.weight;
}

