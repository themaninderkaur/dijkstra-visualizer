#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Define a structure for a graph
typedef struct {
    int numVertices;      // Number of vertices in the graph
    int **adjMatrix;      // Adjacency matrix to represent the graph
} Graph;

// Function prototypes

// Function to create a graph with a given number of vertices
Graph* createGraph(int vertices);

// Function to add an edge to the graph
void addEdge(Graph* graph, int src, int dest, int weight);

// Function to implement Dijkstra's algorithm
void dijkstra(Graph* graph, int startVertex);

// Function to print the shortest path from the source to all vertices
void printShortestPath(int* distances, int numVertices, int startVertex);

// Function to free the allocated memory for the graph
void freeGraph(Graph* graph);

// Function to visualize the graph
void visualizeGraph(Graph* graph);

#endif // MAIN_H
