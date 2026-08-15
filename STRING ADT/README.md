## 🔎 Featured Implementation: Custom String ADT (`06_string`)

This directory contains a custom **Dynamic String ADT** implementation in C. It provides a simple API for creating, modifying, accessing, concatenating, and searching strings while managing dynamic memory using `malloc`, `realloc`, and `free`.

### 🏗️ Data Structure Architecture

The dynamic string is represented using a custom `struct`:

```c
typedef struct Str {
    char *str;  // Pointer to dynamic character array
    int size;   // Total allocated capacity
    int n;      // Current number of characters
} Str;
