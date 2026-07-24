# Linear Search

Linear Search is the simplest searching algorithm used to find a target element in a collection. It works by checking each element sequentially from the beginning until the target element is found or the end of the collection is reached.

Unlike Binary Search, **Linear Search does not require the data to be sorted**.

---

## 📌 Algorithm

1. Start from the first element.
2. Compare the current element with the target value.
3. If the element matches the target, return its position.
4. Otherwise, move to the next element.
5. Repeat until the target is found or the end of the collection is reached.

---

## 📊 Complexity Analysis

| Case | Time Complexity |
|------|-----------------|
| Best Case | **O(1)** |
| Average Case | **O(n)** |
| Worst Case | **O(n)** |

**Space Complexity:** **O(1)**

---

## ✅ Properties

| Property | Value |
|----------|-------|
| Searching Type | Sequential Search |
| Data Requirement | Sorted or Unsorted |
| Recursive | ✅ Optional |
| Iterative | ✅ Yes |
| In-place | ✅ Yes |

---

## 🎯 Advantages

- Very simple to understand and implement.
- Works with both sorted and unsorted data.
- No preprocessing or sorting is required.
- Suitable for small datasets.

---

## ❌ Disadvantages

- Inefficient for large datasets.
- Checks elements one by one, making it slower than Binary Search.
- Performance decreases as the size of the dataset increases.

---

## 📚 Applications

- Searching in small datasets.
- Searching in unsorted arrays or lists.
- Finding an element in linked lists.
- Simple lookup operations.
- Educational purposes and basic searching problems.
