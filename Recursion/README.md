# Recursion

**Recursion** is a programming technique in which a function calls itself to solve a problem. It breaks a complex problem into smaller subproblems until a **base case** is reached, which stops the recursive calls.

---

## 📌 Components of Recursion

### 1. Base Case

The condition that stops the recursive function from calling itself indefinitely.

---

### 2. Recursive Case

The part of the function where the function calls itself with a smaller or simpler input.

---

## 📌 How Recursion Works

1. A function is called.
2. Check the base case.
3. If the base case is met, return the result.
4. Otherwise, call the function recursively with a smaller input.
5. Continue until the base case is reached.
6. Return the results back through the call stack.

---

## 📊 Complexity Analysis

The time and space complexity of recursion depend on the specific algorithm and the depth of recursive calls.

---

## ✅ Advantages

- Easy to understand and implement for recursive problems.
- Produces clean and readable code.
- Ideal for problems that can be divided into smaller subproblems.
- Commonly used in Divide and Conquer algorithms.

---

## ❌ Disadvantages

- Uses additional memory due to the call stack.
- May cause stack overflow for deep recursion.
- Recursive calls introduce function call overhead.
- Incorrect base cases can lead to infinite recursion.

---

## 📚 Applications

- Factorial Calculation
- Fibonacci Sequence
- Sum of First **N** Natural Numbers
