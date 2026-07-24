# Dynamic Memory Allocation in C

Dynamic Memory Allocation (DMA) is the process of allocating and deallocating memory during program execution (runtime). Unlike static memory allocation, dynamic memory allows programs to request memory as needed from the heap, making programs more flexible and memory-efficient.

The Standard Library (`<stdlib.h>`) provides the functions required for dynamic memory management in C.

---

## 📌 Functions Used

### 1. `malloc()` – Memory Allocation

Allocates a specified number of bytes in the heap and returns a pointer to the allocated memory. The allocated memory is **not initialized**, so it contains **garbage values**.

---

### 2. `calloc()` – Contiguous Allocation

Allocates memory for multiple elements of the same size and automatically initializes all allocated bytes to **zero**.

---

### 3. `realloc()` – Reallocation

Changes the size of a previously allocated memory block. It can increase or decrease the allocated memory while preserving the existing data whenever possible.

---

### 4. `free()` – Memory Deallocation

Releases memory that was previously allocated using `malloc()`, `calloc()`, or `realloc()`. This helps prevent memory leaks and makes the memory available for reuse.

---

## 📊 Comparison

| Function | Purpose | Initialization |
|----------|---------|----------------|
| `malloc()` | Allocates memory | Garbage values |
| `calloc()` | Allocates memory for multiple elements | Initialized to `0` |
| `realloc()` | Resizes allocated memory | Preserves existing data *(if possible)* |
| `free()` | Releases allocated memory | Not Applicable |

---

## 🧠 Memory Layout

```text
+----------------------+
|      Stack           |
| Local Variables      |
+----------------------+

+----------------------+
|       Heap           |
| malloc()             |
| calloc()             |
| realloc()            |
| free()               |
+----------------------+

+----------------------+
|   Data Segment       |
+----------------------+

+----------------------+
|   Code/Text Segment  |
+----------------------+
```

---

## ✅ Advantages

- Allocates memory only when needed.
- Makes efficient use of available memory.
- Supports dynamic data structures such as Linked Lists, Stacks, Queues, Trees, and Graphs.
- Allows flexible memory management at runtime.

---

## ❌ Disadvantages

- Requires manual memory management.
- Memory leaks may occur if allocated memory is not released.
- Improper memory handling can lead to dangling pointers and undefined behavior.

---

## 📚 Applications

- Linked List
- Stack
- Queue
- Tree
- Graph
- Dynamic Array
- Hash Table
- Memory Buffer
