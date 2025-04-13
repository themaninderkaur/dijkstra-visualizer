#ifndef GRAPH_H
#define GRAPH_H

typedef struct {
    int numVertices;
    int** adjMatrix;
} Graph;

Graph* createGraph(int vertices);
void freeGraph(Graph* graph);

#endif // GRAPH_H
