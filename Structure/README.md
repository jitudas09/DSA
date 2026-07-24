# Structure in C

A **Structure** is a user-defined data type in C that allows grouping variables of different data types under a single name. It is used to represent a record containing related information.

Structures improve code organization and make it easier to manage complex data.

---

## 📌 Features

- User-defined data type.
- Can store variables of different data types.
- Groups related data into a single unit.
- Supports arrays, pointers, and nested structures.
- Multiple structure variables can be created from the same definition.

---

## 📌 Structure Members

A structure can contain different types of members, such as:

- Integer (`int`)
- Character (`char`)
- Floating-point (`float`, `double`)
- Arrays
- Pointers
- Another Structure (Nested Structure)

---

## 📌 Basic Operations

### 1. Declaration

Defines the structure and its members.

---

### 2. Initialization

Assigns values to the structure members.

---

### 3. Accessing Members

Structure members are accessed using the **dot (`.`) operator**.

---

### 4. Pointer to Structure

A pointer can reference a structure, and members are accessed using the **arrow (`->`) operator**.

---

## 📊 Complexity Analysis

| Operation | Time Complexity |
|-----------|-----------------|
| Access Member | **O(1)** |
| Update Member | **O(1)** |
| Copy Structure | **O(n)** *(depends on the number of members)* |

**Space Complexity:** Depends on the size of its members.

---

## ✅ Advantages

- Groups related data together.
- Improves code readability and maintainability.
- Supports complex data modeling.
- Can be combined with arrays, pointers, and functions.

---

## ❌ Disadvantages

- Members occupy additional memory due to padding and alignment.
- Does not support inheritance or polymorphism like classes.
- Large structures may increase memory usage.

---

## 📚 Applications

- Student Records
- Employee Management
- Library Management System
- Banking Systems
- Inventory Management
- Database Records
- File Handling
- Linked List Nodes
