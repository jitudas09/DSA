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

Add "Hello":
Hello

Add " World":
Hello World

Undo:
Hello

Undo:
void

Redo:
Hello

Redo:
Hello World
```

The program stores different text states in the Undo and Redo stacks to provide this functionality.

---

## 🛠️ Technologies Used

* **Language:** C
* **Concept:** Stack
* **Header Files:**

  * `stdio.h`
  * `string.h`

---

## 📂 Project Structure

```text
Simple-Text-Editor/
│
├── main.c
└── README.md
```

---

## ▶️ How to Run

### Step 1: Clone the Repository

```bash
git clone <your-repository-link>
```

### Step 2: Go to the Project Directory

```bash
cd Simple-Text-Editor
```

### Step 3: Compile the Program

Using GCC:

```bash
gcc main.c -o text_editor
```

### Step 4: Run the Program

On Windows:

```bash
text_editor
```

On Linux/macOS:

```bash
./text_editor
```

---

## 💻 Program Menu

The program provides the following menu:

```text
$$$$$$$$$$$$$$$$$$$$
Your Text: void
$$$$$$$$$$$$$$$$$$$$
1. Add Text
2. Undo (Ctrl+Z)
3. Redo (Ctrl+Y)
4. Exit

Enter your choice:
```

---

## 📊 Example

```text
Enter your choice: 1

Enter text: Jitu Das
Text added successfully!

Enter your choice: 1

Enter text: World
Text added successfully!

Your Text: Jitu DasWorld

Enter your choice: 2

Undo successful!

Your Text: Jitu Das

Enter your choice: 3

Redo successful!

Your Text: Jitu DasWorld
```

---

## 📚 Concepts Practiced

This project helps to understand:

* Stack Data Structure
* Array
* String Handling
* `strcpy()`
* `strcat()`
* `strlen()`
* Functions in C
* Menu-driven programming
* Undo/Redo mechanism
* Basic memory and data management

---

## ⚠️ Limitations

This is a simple educational text editor, so it has some limitations:

* Maximum **10 undo/redo operations**
* Maximum text size is **100 characters**
* It does not save text to a file
* Undo/Redo works on text additions
* It is a console-based application

---
