# 🔎 Featured Implementation: Custom String ADT

This directory contains a custom **Dynamic String ADT implementation in C**. It provides functionality similar to dynamic strings such as C++'s `std::string`, while manually managing memory using `malloc()`, `realloc()`, and `free()`.

---

## 🏗️ Data Structure Architecture

The dynamic string is represented using a custom `struct`:

```c
typedef struct S {
    char *str;   // Pointer to dynamic character array
    int size;    // Total allocated capacity
    int n;       // Current string length
} S;
```

### 📌 Structure Members

| Member | Description                                          |
| ------ | ---------------------------------------------------- |
| `str`  | Pointer to the dynamically allocated character array |
| `size` | Total allocated memory/capacity                      |
| `n`    | Current length of the string                         |

---

## ⚙️ Function Overview

| Function           | Description                                           | Time Complexity |
| ------------------ | ----------------------------------------------------- | --------------- |
| `create()`         | Initializes a string from a standard C-string         | `O(N)`          |
| `push_back()`      | Appends a single character; resizes if necessary      | `O(1)`*         |
| `pop_back()`       | Removes the last character                            | `O(1)`          |
| `size()`           | Returns the current character count                   | `O(1)`          |
| `at_index()`       | Accesses the character at a given index               | `O(1)`          |
| `clear()`          | Clears the string content without freeing the buffer  | `O(1)`          |
| `concat()`         | Concatenates one string onto another                  | `O(M)`          |
| `insert_at()`      | Inserts a character at a given index                  | `O(N)`          |
| `delete_at()`      | Deletes a character at a given index                  | `O(N)`          |
| `replace_at()`     | Replaces a character at the target index              | `O(1)`          |
| `find_substring()` | Searches for a substring using naive pattern matching | `O(N × M)`      |
| `display()`        | Prints the string content to `stdout`                 | `O(N)`          |
| `free()`           | Releases dynamically allocated memory                 | `O(1)`          |

> ***** `push_back()` is `O(1)` amortized, but can take `O(N)` when the buffer needs to be resized.

---

## ✨ Key Features

* 🔹 Dynamic memory management
* 🔹 Automatic resizing using `realloc()`
* 🔹 Character insertion and deletion
* 🔹 String concatenation
* 🔹 Character replacement
* 🔹 Substring searching
* 🔹 Efficient random character access
* 🔹 Manual memory deallocation
* 🔹 Clean and reusable API

---

## 🧠 Complexity Summary

Most operations are designed to be efficient:

* **Random access:** `O(1)`
* **Append:** `O(1)` amortized
* **Insertion/Deletion:** `O(N)`
* **Concatenation:** `O(M)`
* **Substring search:** `O(N × M)`

This implementation is a good example of how **dynamic strings work internally using pointers and dynamic memory allocation in C**.
