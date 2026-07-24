# Stack

A **Stack** is a linear data structure that follows the **Last In, First Out (LIFO)** principle. The last element inserted into the stack is the first one to be removed. All insertion and deletion operations are performed at the **top** of the stack.

Stacks are widely used in function calls, expression evaluation, and backtracking algorithms.

---

## 📌 Basic Operations

### 1. Push

Inserts a new element onto the top of the stack.

**Time Complexity:** `O(1)`

---

### 2. Pop

Removes the top element from the stack.

**Time Complexity:** `O(1)`

---

### 3. Top (Peek)

Returns the top element without removing it.

**Time Complexity:** `O(1)`

---

### 4. Is Empty

Checks whether the stack contains any elements.

**Time Complexity:** `O(1)`

---

### 5. Is Full

Checks whether the stack is full (applicable for array-based implementation).

**Time Complexity:** `O(1)`

---

## 📊 Complexity Analysis

| Operation | Time Complexity |
|-----------|-----------------|
| Push | **O(1)** |
| Pop | **O(1)** |
| Top (Peek) | **O(1)** |
| Search | **O(n)** |

**Space Complexity:** **O(n)**

---

## ✅ Properties

| Property | Value |
|----------|-------|
| Data Structure Type | Linear |
| Principle | LIFO (Last In, First Out) |
| Insertion | Top |
| Deletion | Top |
| Implementation | Array or Linked List |

---

## ✅ Advantages

- Fast insertion and deletion.
- Easy to implement.
- Efficient memory usage.
- Suitable for recursive and backtracking problems.

---

## ❌ Disadvantages

- Sequential access only.
- Searching is inefficient.
- Fixed capacity in array-based implementation unless dynamically resized.

---

## 📚 Applications

- Function Call Management
- Recursion
- Expression Evaluation
- Parentheses Matching
- Undo/Redo Operations
- Browser History
- Backtracking Algorithms
- Depth-First Search (DFS)
