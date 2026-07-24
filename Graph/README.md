# Graph

A **Graph** is a non-linear data structure consisting of a set of **vertices (nodes)** and **edges** that connect pairs of vertices. Graphs are used to represent relationships between different objects.

Graphs are widely used in computer networks, social networks, maps, and routing algorithms.

---

## 📌 Terminology

- **Vertex (Node):** A fundamental unit of a graph.
- **Edge:** A connection between two vertices.
- **Adjacent Vertices:** Two vertices connected by an edge.
- **Degree:** The number of edges connected to a vertex.
- **Path:** A sequence of vertices connected by edges.
- **Cycle:** A path that starts and ends at the same vertex.

---

## 📌 Types of Graph

### 1. Undirected Graph
Edges have no direction.

### 2. Directed Graph (Digraph)
Edges have a specific direction.

### 3. Weighted Graph
Each edge has an associated weight or cost.

### 4. Unweighted Graph
Edges do not have weights.

---

## 📌 Graph Representation

### 1. Adjacency Matrix

Represents the graph using a 2D matrix.

---

### 2. Adjacency List

Represents the graph using a list of neighboring vertices.

---

## 📌 Basic Operations

### 1. Add Vertex

Adds a new vertex to the graph.

---

### 2. Add Edge

Creates a connection between two vertices.

---

### 3. Remove Vertex

Removes a vertex and all connected edges.

---

### 4. Remove Edge

Deletes the connection between two vertices.

---

### 5. Traversal

Visits all vertices of the graph.

Common traversal methods:

- Breadth-First Search (BFS)
- Depth-First Search (DFS)

---

## 📊 Complexity Analysis

| Representation | Space Complexity |
|---------------|------------------|
| Adjacency Matrix | **O(V²)** |
| Adjacency List | **O(V + E)** |

> **V** = Number of Vertices  
> **E** = Number of Edges

---

## ✅ Advantages

- Efficiently represents complex relationships.
- Suitable for modeling real-world networks.
- Supports various traversal and pathfinding algorithms.
- Flexible representation using matrices or lists.

---

## ❌ Disadvantages

- Can consume significant memory for dense graphs.
- Graph algorithms are often more complex than linear data structures.
- Adjacency Matrix is inefficient for sparse graphs.

---

## 📚 Applications

- Social Networks
- Computer Networks
- GPS & Navigation Systems
- Web Page Linking
- Recommendation Systems
- Network Routing
- Dependency Graphs
- Artificial Intelligence
