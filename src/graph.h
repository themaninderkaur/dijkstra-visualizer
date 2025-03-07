 // graph.h
#ifndef GRAPH_H
#define GRAPH_H

#include <limits.h>

typedef struct Edge {
    int destination;
    int weight;
    struct Edge* next;
} Edge;

typedef struct Node {
    int id;
    Edge* edges; // List of edges
} Node;

typedef struct Graph {
    int numNodes;
    Node* nodes; // Array of nodes
} Graph;


Graph* createGraph(int numNodes);
void addEdge(Graph* graph, int src, int dest, int weight);
void freeGraph(Graph* graph);

#endif // GRAPH_H
