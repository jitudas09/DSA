# Binary Search

Binary Search is an efficient searching algorithm used to find a target element in a **sorted array**. It works by repeatedly dividing the search interval in half until the target element is found or the search space becomes empty.

> **Note:** Binary Search works only on **sorted** data.

---

## 📌 Algorithm

1. Initialize two pointers:
   - `low = 0`
   - `high = n - 1`
2. Find the middle element:
   - `mid = low + (high - low) / 2`
3. Compare the target with the middle element:
   - If equal, return the index.
   - If the target is smaller, search the left half.
   - If the target is greater, search the right half.
4. Repeat until the element is found or `low > high`.

---

## 📊 Complexity Analysis

| Case | Time Complexity |
|------|-----------------|
| Best Case | **O(1)** |
| Average Case | **O(log n)** |
| Worst Case | **O(log n)** |

**Space Complexity**

- **Iterative:** O(1)
- **Recursive:** O(log n)

---

## ✅ Properties

| Property | Value |
|----------|-------|
| Searching Type | Divide and Conquer |
| Data Requirement | Sorted Array |
| Recursive | ✅ Optional |
| Iterative | ✅ Yes |
| In-place | ✅ Yes |

---

## 🎯 Advantages

- Very efficient for searching in sorted data.
- Significantly faster than Linear Search for large datasets.
- Requires only logarithmic time complexity.
- Can be implemented using either iteration or recursion.

---

## ❌ Disadvantages

- Works only on sorted data.
- Sorting the data beforehand may add extra overhead.
- Not suitable for unsorted collections.
- Inefficient for linked lists due to lack of direct indexing.

---

## 📚 Applications

- Searching in sorted arrays.
- Database indexing.
- Library management systems.
- Dictionary and phonebook search.
- Competitive Programming.
- Standard Template Library (STL) functions such as `binary_search()`, `lower_bound()`, and `upper_bound()`.

---

## 📝 Example

**Sorted Array**

```text
2 5 8 12 16 23 38
```

**Target**

```text
16
```

**Output**

```text
Element found at index 4
```
