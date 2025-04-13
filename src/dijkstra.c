#include <stdio.h>
#include <limits.h>
#include "dijkstra.h"

void dijkstra(Graph* graph, int startVertex) {
    int numVertices = graph->numVertices;
    int distance[numVertices];
    int visited[numVertices];

    for (int i = 0; i < numVertices; i++) {
        distance[i] = INT_MAX;
        visited[i] = 0;
    }

    distance[startVertex] = 0;

    for (int count = 0; count < numVertices - 1; count++) {
        int minDistance = INT_MAX;
        int minIndex;

        for (int v = 0; v < numVertices; v++) {
            if (!visited[v] && distance[v] <= minDistance) {
                minDistance = distance[v];
                minIndex = v;
            }
        }

        visited[minIndex] = 1;

        for (int v = 0; v < numVertices; v++) {
            if (!visited[v] && graph->adjMatrix[minIndex][v] && 
                distance[minIndex] != INT_MAX && 
                distance[minIndex] + graph->adjMatrix[minIndex][v] < distance[v]) {
                distance[v] = distance[minIndex] + graph->adjMatrix[minIndex][v];
            }
        }
    }

    printf("Vertex Distance from Source\n");
    for (int i = 0; i < numVertices; i++) {
        printf("%d \t\t %d\n", i, distance[i]);
    }
}
