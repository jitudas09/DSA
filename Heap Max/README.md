# Max Heap

A **Max Heap** is a complete binary tree in which the value of every parent node is **greater than or equal to** the values of its children. As a result, the **maximum element is always stored at the root** of the heap.

Max Heap is commonly used to implement **Priority Queues** and **Heap Sort**.

---

## 📌 Properties

- It is a **Complete Binary Tree**.
- Every parent node is greater than or equal to its children.
- The root node always contains the maximum value.
- Typically implemented using an array.
- Height of a heap with **n** nodes is **O(log n)**.

---

## 📌 Heap Operations

### 1. Insertion

- Insert the new element at the end of the heap.
- Compare it with its parent.
- Swap while the parent is smaller.
- Continue until the heap property is restored.

**Time Complexity:** `O(log n)`

---

### 2. Deletion (Delete Maximum)

- Remove the root element.
- Move the last element to the root.
- Compare it with its children.
- Swap with the larger child until the heap property is restored.

**Time Complexity:** `O(log n)`

---

### 3. Peek (Get Maximum)

Returns the maximum element without removing it.

**Time Complexity:** `O(1)`

---

### 4. Build Heap

Creates a Max Heap from an unsorted array.

**Time Complexity:** `O(n)`

---

## 📊 Complexity Analysis

| Operation | Time Complexity |
|-----------|-----------------|
| Insert | **O(log n)** |
| Delete Max | **O(log n)** |
| Peek | **O(1)** |
| Build Heap | **O(n)** |
| Search | **O(n)** |

**Space Complexity:** `O(n)`

---

## ✅ Advantages

- Fast access to the maximum element.
- Efficient insertion and deletion.
- Ideal for implementing Priority Queues.
- Used in Heap Sort.
- Maintains a balanced tree structure.

---

## ❌ Disadvantages

- Searching for an arbitrary element is inefficient.
- Does not maintain sorted order.
- More complex than simple arrays for basic operations.

---

## 📚 Applications

- Priority Queue
- Heap Sort
- CPU Scheduling
- Job Scheduling
- Task Scheduling
- Graph Algorithms (Priority-based operations)
- Event Simulation

---

## 📝 Example

```text
        100
       /   \
     80     60
    / \    / \
   50 40  30 20
```

**Array Representation**

```text
[100, 80, 60, 50, 40, 30, 20]
```
