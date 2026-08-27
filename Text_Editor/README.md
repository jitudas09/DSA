# 📝 Simple Text Editor in C

A simple **Text Editor** implemented in the **C programming language** using **Stack** concepts.

This project allows the user to:

* Add text
* Undo the last text operation
* Redo the undone operation
* Display the current text
* Show `void` when there is no text

---

## 📌 Features

### 1. Add Text

The user can enter a line of text, and it will be added to the current text.

### 2. Undo — Ctrl + Z

Undo removes the most recent text addition and restores the previous state.

### 3. Redo — Ctrl + Y

Redo restores the text that was previously undone.

### 4. Display Current Text

The current text is displayed at the top of the menu.

If there is no text, it displays:

```text
Your Text: void
```

### 5. Exit

The program can be closed using option `4`.

---

## 🧠 Data Structure Used

This project uses the **Stack Data Structure**.

Two stacks are used:

```text
Undo Stack
Redo Stack
```

### Undo Stack

Stores previous versions of the text.

```text
Add Text → Push previous text into Undo Stack
```

### Redo Stack

Stores text states that have been undone.

```text
Undo → Push current text into Redo Stack
```

When new text is added after an Undo operation, the Redo Stack is cleared.

---

## 🔄 How Undo and Redo Work

Example:

```text
Initial:
void

Add "Jitu Das":
Jitu Das

Undo:
void

Redo:
Jitu Das
```
