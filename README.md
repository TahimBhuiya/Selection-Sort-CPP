# Selection Sort in C++

## 📌 Overview

This C++ program demonstrates the **Selection Sort** algorithm, a simple comparison-based sorting method:

1. Repeatedly finds the minimum element from the unsorted portion of the array.
2. Places the minimum element at the beginning of the sorted portion.
3. Sorts numbers in **ascending order**.

It displays the array before and after sorting to help visualize how selection sort organizes the elements.

---

## 🔧 Features

- **Step-by-Step Sorting**: Selects and places the minimum element in its correct position.

- **Simple Implementation**: Uses nested loops for clarity.

- **Array Input**: Works with any array of integers defined in the code.

- **Fully Commented Code**: Easy to understand and modify.

---

## 📋 Example Run

**Input:**
Original array:
64 25 12 22 11

**Output:**
Sorted array:
11 12 22 25 64

---

## ⚙ How It Works

1. **Iterate Through Array**
   - The outer loop selects the position where the next minimum element should go.
2. **Find Minimum Element**
   - The inner loop finds the minimum element in the unsorted portion of the array.
3. **Swap Elements**
   - Swap the found minimum element with the first element of the unsorted portion.
4. **Repeat**
   - Continue until all elements are placed in sorted order.

---

## 🛠 How to Run

### You can run this code in two ways:

### 1️⃣ Using a local C++ compiler

- Save the code as `selection_sort.cpp` or any name you prefer.

- Compile and run it with your C++ compiler (e.g., Dev-C++, Code::Blocks, Visual Studio, g++):

```bash
g++ selection_sort.cpp -o selection_sort
./selection_sort
```

### 2️⃣ Using an online C++ compiler

- Go to a site like [Programiz](https://www.programiz.com/cpp-programming/online-compiler) or [Replit](https://replit.com/languages/cpp)

* Paste the code
* Run it directly in your browser.
