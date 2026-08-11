# 🔍 Binary Search

A simple project based on the **Binary Search Algorithm**.

## 📌 About

Binary Search is an efficient searching algorithm used to find a specific element from a **sorted array**.

It works by repeatedly dividing the search range into two halves and checking the middle element.

## ⚙️ How It Works

1. Start with the first and last positions of the array.
2. Find the middle element.
3. Compare the middle element with the target value.
4. If the middle element is the target, the search is successful.
5. If the target is greater, search in the right half.
6. If the target is smaller, search in the left half.
7. Continue until the element is found or the search range becomes empty.

## ⏱️ Time Complexity

| Case         | Complexity |
| ------------ | ---------- |
| Best Case    | O(1)       |
| Average Case | O(log n)   |
| Worst Case   | O(log n)   |

**Space Complexity:** O(1)

## ⚠️ Important Condition

Binary Search can be applied only when the array is **sorted**.

### Example

**Sorted Array:**
`10, 20, 30, 40, 50, 60, 70` ✅

**Unsorted Array:**
`30, 10, 50, 20, 70, 40` ❌

## 🔄 Binary Search vs Linear Search

| Feature     | Binary Search      | Linear Search       |
| ----------- | ------------------ | ------------------- |
| Requirement | Sorted data        | No sorting required |
| Best Case   | O(1)               | O(1)                |
| Worst Case  | O(log n)           | O(n)                |
| Approach    | Divide and Conquer | Sequential          |

## 🎯 Key Concept

**Binary Search reduces the search space by half at every step**, making it much faster than Linear Search for large sorted datasets.

## 📚 Topics Covered

* Searching Algorithms
* Binary Search
* Sorted Arrays
* Divide and Conquer
* Time Complexity
* Space Complexity
