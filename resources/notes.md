# Notes

## What is the Dijkstra's Algorithm?
Dijkstra's algorithm is a method used to find the shortest path between points (or nodes) in a graph. A graph is a collection of points connected by lines, which can represent various real-world scenarios such as maps, networks, or relationships. You make be asking why we should use it? It helps in determining the quickest route from one location to another, whcih is useful in navigation systems, network routing, and many more uses in other applications.

## Key Concepts
- **Graph**: a structure made up of points (called nodes) and connections between the points (also known as edges). A real world example: imagine that cities are nodes, and roads are the edges that connect the cities to one another.
- **Node**: A point in the graph.
- **Edge**: A line connecting two nodes.
- **Weight**: Each edge can have a weight, which represents the cost of traveling that edge. In the real world example, this could be distance, time, or any other measure.

## The Process
- **Initialization**: Start with a node (the starting point) and set its distance to zero. All other nodes are set the infinity (meaning they are currentkt unreachable at the start)
- **Visit Nodes**: Look at all the neighboring nodes of the current starting node. For each neightbor, calculate the distance from the starting node to the neighbor through the current node.
- **Update Distances**: If the calculated distance to a neightbor is less than the previous recorded disatnce, update it.
- **Mark Vistitation**: Once all neightbors of a node have been considered mark that node as visited. This means it won't be checked out again.
- **Repeat**: Move to the unvisited node with the smallest distance and repeat the process until all nodes have been vistied or the shortest path to the target node is found.

