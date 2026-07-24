# Linked List

A **Linked List** is a linear data structure in which elements, called **nodes**, are connected using pointers. Unlike arrays, linked lists do not store elements in contiguous memory locations. Each node contains data and a pointer to the next node in the sequence.

Linked Lists use **dynamic memory allocation**, allowing memory to be allocated at runtime as needed.

---

## 📌 Structure of a Node

Each node consists of:

- **Data:** Stores the value.
- **Next Pointer:** Stores the address of the next node.

---

## 📌 Types of Linked List

### 1. Singly Linked List
Each node points only to the next node.

### 2. Doubly Linked List
Each node contains pointers to both the previous and the next node.

### 3. Circular Singly Linked List
The last node points back to the first node.

### 4. Circular Doubly Linked List
Each node has both previous and next pointers, and the last node connects to the first node.

---

## 📌 Basic Operations

### 1. Traversal
Visit each node from the beginning to the end.

**Time Complexity:** `O(n)`

---

### 2. Insertion

- At the beginning
- At the end
- At a specific position

**Time Complexity:**

- Beginning: `O(1)`
- End: `O(n)` *(O(1) if a tail pointer is maintained)*
- Specific Position: `O(n)`

---

### 3. Deletion

- From the beginning
- From the end
- From a specific position

**Time Complexity:**

- Beginning: `O(1)`
- End: `O(n)`
- Specific Position: `O(n)`

---

### 4. Searching

Find a node containing a specific value.

**Time Complexity:** `O(n)`

---

## 📊 Complexity Analysis

| Operation | Time Complexity |
|-----------|-----------------|
| Access | **O(n)** |
| Search | **O(n)** |
| Insert at Beginning | **O(1)** |
| Insert at End | **O(n)** |
| Delete at Beginning | **O(1)** |
| Delete at End | **O(n)** |

**Space Complexity:** **O(n)**

---

## ✅ Advantages

- Dynamic memory allocation.
- Efficient insertion and deletion at the beginning.
- Memory is allocated only when needed.
- No fixed size limitation.
- Suitable for implementing dynamic data structures.

---

## ❌ Disadvantages

- Extra memory is required for pointers.
- Sequential access only (no direct indexing).
- Searching is slower than arrays.
- Poor cache performance compared to arrays.

---

## 📚 Applications

- Stack
- Queue
- Graph (Adjacency List)
- Hash Table (Separate Chaining)
- Polynomial Representation
- Music Playlist
- Browser History
- Undo/Redo Functionality
- Memory Management
