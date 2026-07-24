# Queue

A **Queue** is a linear data structure that follows the **First In, First Out (FIFO)** principle. The first element inserted into the queue is the first one to be removed. Elements are inserted at the **rear** and removed from the **front**.

Queues are widely used in scheduling, buffering, and process management.

---

## 📌 Basic Operations

### 1. Enqueue

Inserts a new element at the **rear** of the queue.

**Time Complexity:** `O(1)`

---

### 2. Dequeue

Removes the element from the **front** of the queue.

**Time Complexity:** `O(1)`

---

### 3. Front (Peek)

Returns the front element without removing it.

**Time Complexity:** `O(1)`

---

### 4. Rear

Returns the last element of the queue without removing it.

**Time Complexity:** `O(1)`

---

### 5. Is Empty

Checks whether the queue contains any elements.

**Time Complexity:** `O(1)`

---

### 6. Is Full

Checks whether the queue is full (applicable for array-based implementation).

**Time Complexity:** `O(1)`

---

## 📌 Types of Queue

### 1. Simple Queue
Follows the standard FIFO principle.

### 2. Circular Queue
The last position is connected to the first position, allowing efficient memory utilization.

### 3. Priority Queue
Elements are removed based on their priority rather than their insertion order.

### 4. Double Ended Queue (Deque)
Supports insertion and deletion from both the front and the rear.

---

## 📊 Complexity Analysis

| Operation | Time Complexity |
|-----------|-----------------|
| Enqueue | **O(1)** |
| Dequeue | **O(1)** |
| Front (Peek) | **O(1)** |
| Rear | **O(1)** |
| Search | **O(n)** |

**Space Complexity:** **O(n)**

---

## ✅ Advantages

- Follows the FIFO principle.
- Fast insertion and deletion operations.
- Efficient for scheduling and buffering tasks.
- Can be implemented using arrays or linked lists.

---

## ❌ Disadvantages

- Sequential access only.
- Searching is inefficient.
- Array-based implementation has a fixed capacity unless dynamically resized.

---

## 📚 Applications

- CPU Scheduling
- Process Scheduling
- Printer Queue
- Ticket Reservation System
- Breadth-First Search (BFS)
- Message Queue
- Network Packet Scheduling
- Keyboard Buffer
- Call Center Systems
