# Tree

A **Tree** is a hierarchical, non-linear data structure consisting of **nodes** connected by **edges**. It starts with a single node called the **root**, and every node may have zero or more child nodes.

Trees are widely used to represent hierarchical data and support efficient searching, insertion, and deletion operations.

---

## 📌 Terminology

- **Root:** The topmost node of the tree.
- **Parent:** A node that has one or more child nodes.
- **Child:** A node directly connected to a parent.
- **Leaf Node:** A node with no children.
- **Sibling:** Nodes that share the same parent.
- **Edge:** A connection between two nodes.
- **Height:** The length of the longest path from the root to a leaf.
- **Depth:** The number of edges from the root to a node.

---

## 📌 Types of Tree

### 1. Binary Tree
Each node has at most two children.

### 2. Binary Search Tree (BST)
The left subtree contains smaller values, and the right subtree contains larger values than the parent node.

### 3. AVL Tree
A self-balancing Binary Search Tree.

### 4. Heap
A complete binary tree that satisfies the heap property (Max Heap or Min Heap).

---

## 📌 Basic Operations

### 1. Insertion

Adds a new node to the tree.

**Time Complexity:** `O(log n)` *(Balanced Tree)*

---

### 2. Deletion

Removes a node while maintaining the tree structure.

**Time Complexity:** `O(log n)` *(Balanced Tree)*

---

### 3. Searching

Finds a specific node in the tree.

**Time Complexity:** `O(log n)` *(Balanced Tree)*

---

### 4. Traversal

Visits every node in the tree.

Common traversal methods:

- Preorder Traversal
- Inorder Traversal
- Postorder Traversal
- Level Order Traversal

---

## 📊 Complexity Analysis

| Operation | Average Case | Worst Case |
|-----------|-------------:|-----------:|
| Search | **O(log n)** | **O(n)** |
| Insert | **O(log n)** | **O(n)** |
| Delete | **O(log n)** | **O(n)** |
| Traversal | **O(n)** | **O(n)** |

**Space Complexity:** **O(n)**

---

## ✅ Advantages

- Efficient searching, insertion, and deletion.
- Represents hierarchical data naturally.
- Supports ordered data efficiently.
- Used in many advanced algorithms and data structures.

---

## ❌ Disadvantages

- Can become unbalanced, reducing performance.
- More complex than linear data structures.
- Requires extra memory for pointers.

---

## 📚 Applications

- File Systems
- Database Indexing
- Binary Search Trees (BST)
- Heap
- Expression Trees
- Decision Trees
- XML/HTML Document Structure
- Artificial Intelligence
