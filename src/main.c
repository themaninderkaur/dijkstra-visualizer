/*
 * dijkstra-visualizer
 * Maninder (Kaurman) Kaur
 * 2025
 */

#include <stdio.h>
#include "main.h"
#include "dijkstra.h"
#include "graph.h"

void initializeGraph(Graph* graph) {
    // Example: Add edges to the graph
    graph->adjMatrix[0][1] = 4;
    graph->adjMatrix[0][2] = 1;
    graph->adjMatrix[1][2] = 2;
    graph->adjMatrix[1][3] = 5;
    graph->adjMatrix[2][3] = 8;
}

int main() {
    int vertices = 4;
    Graph* graph = createGraph(vertices);
    initializeGraph(graph);
    
    dijkstra(graph, 0);
    
    freeGraph(graph);
    return 0;
}
