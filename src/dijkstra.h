 // dijkstra.h
#ifndef DIJKSTRA_H
#define DIJKSTRA_H

#include "graph.h"

void dijkstra(Graph* graph, int startNode, int* distances, int* previous);
void printShortestPath(int* previous, int startNode, int endNode);

#endif // DIJKSTRA_H
