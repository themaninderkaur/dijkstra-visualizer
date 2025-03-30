# dijkstra-visualizer

## Overview

The Dijkstra Visualizer is a simple yet effective tool designed to demonstrate Dijkstra's algorithm for finding the shortest path in a graph. This project was developed as a side project for my C programming class and discrete mathematics class. It serves as both a learning experience and a practical application of the concepts covered in these courses.

## Table of Contents

- [Features](#features)
- [Technologies Used](#technologies-used)
- [Installation](#installation)
- [Usage](#usage)
- [How It Works](#how-it-works)
- [Future Improvements](#future-improvements)
- [Acknowledgments](#acknowledgments)

## Features

- Visual representation of a graph.
- Step-by-step execution of Dijkstra's algorithm.
- Interactive user interface to add nodes and edges.
- Display of the shortest path and its cost.

## Technologies Used

- C programming language
- Standard libraries (stdio.h, stdlib.h, etc.)
- Graphical libraries (if applicable, e.g., SDL or OpenGL)
- Makefile for build automation

## Installation

To run the Dijkstra Visualizer, follow these steps:

1. Clone the repository:
   ```bash
   git clone https://github.com/themaninderkaur/dijkstra-visualizer.git
   cd dijkstra-visualizer
   ```

2. Compile the program:
   ```bash
   make
   ```

3. Run the executable:
   ```bash
   ./dijkstra_visualizer
   ```

## Usage

1. Launch the application.
2. Use the mouse to create nodes by clicking on the canvas.
3. Connect nodes by clicking and dragging between them to create edges.
4. Select a starting node and a target node.
5. Click the "Run" button to visualize the execution of Dijkstra's algorithm.
6. Observe the shortest path highlighted on the graph.

## How It Works

The Dijkstra Visualizer implements Dijkstra's algorithm, which is a popular algorithm for finding the shortest paths between nodes in a graph. The algorithm works by maintaining a set of nodes whose shortest distance from the source node is known and iteratively updating the distances of neighboring nodes.

### Key Components:

- **Graph Representation**: The graph is represented using an adjacency list or matrix, depending on the implementation.
- **Priority Queue**: A priority queue is used to efficiently retrieve the next node with the smallest tentative distance.
- **Visualization**: The program provides a graphical interface to visualize the graph and the algorithm's execution.

## Future Improvements

- Add support for weighted edges.
- Implement additional algorithms (e.g., A*, Bellman-Ford).
- Enhance the user interface for better usability.
- Include options for saving and loading graphs.

