# 🔴 Radix Sort

An implementation of the **Radix Sort Algorithm**.

## 📌 About

Radix Sort is a **non-comparison-based sorting algorithm**.

It sorts numbers by processing their digits one position at a time, usually starting from the least significant digit.

## ⚙️ How It Works

1. Find the largest number to determine the number of digits.
2. Start with the least significant digit.
3. Group or sort the numbers according to the current digit.
4. Move to the next digit.
5. Repeat until all digit positions have been processed.

## ⏱️ Time Complexity

| Case         | Complexity |
| ------------ | ---------- |
| Best Case    | O(nk)      |
| Average Case | O(nk)      |
| Worst Case   | O(nk)      |

Where:

* `n` = Number of elements
* `k` = Number of digits

**Space Complexity:** O(n + k)

## ✅ Features

* Non-comparison-based sorting
* Efficient for suitable integer datasets
* Can be faster than comparison-based algorithms in specific cases
* Useful for numbers with a limited number of digits

## ⚠️ Limitation

Radix Sort is mainly suitable for data that can be processed digit by digit, such as integers.

## 📚 Topics Covered

* Sorting Algorithm
* Non-Comparison Sorting
* Arrays
* Time Complexity
* Space Complexity
  *****Thank you, sir*****
